#include "bluetoothconnect.h"
#include "ui_bluetoothconnect.h"



BluetoothConnect::BluetoothConnect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BluetoothConnect)
{
    ui->setupUi(this);
    setWindowTitle("Bluetooth Connect");
    ui->statusLabel->setText("Click Search to search for devices");
    //创建设备发现对象
    m_deviceDiscoveryAgent = new QBluetoothDeviceDiscoveryAgent(this);
    m_btLocalDevice = new QBluetoothLocalDevice(); //创建本地设备对象
    m_btSocket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol); //蓝牙套接字
    QBluetoothAddress adapterAddress = m_btLocalDevice->address(); //使用默认蓝牙适配器
    m_serviceDiscoveryAgent = new QBluetoothServiceDiscoveryAgent(adapterAddress); //创建服务发现对象

    /*-------------------- 初始化设备列表与服务列表 -----------------*/
    //设置设备列表
    QListWidgetItem* item = new QListWidgetItem();
    //创建自定义窗口,放入到listwidget中
    BluetoothDeviceCell* btDevCell = new BluetoothDeviceCell();
    //设置item的高
    item->setSizeHint(QSize(ui->deviceListWidget->width(), btDevCell->height()));
    //设置label显示
    //第一个加进去的item在最上面，相当于标题
    btDevCell->m_btName->setText("名称");
    btDevCell->m_btAddr->setText("地址");
    btDevCell->m_btRssi->setText("信号强度");

    //将item加入到listwidget中
    ui->deviceListWidget->addItem(item);
    //设置item的窗口为自定义的窗口
    ui->deviceListWidget->setItemWidget(item, btDevCell);

    //设置服务列表的标题
    QListWidgetItem* items = new QListWidgetItem();
    //创建自定义窗口，放入到listwidget中
    BluetoothDeviceCell* btDevCells = new BluetoothDeviceCell();
    //设定item的尺寸
    items->setSizeHint(QSize(ui->serviceListWidget->width(), btDevCells->height()));
    //设置label的显示
    //第一个加进去的item在最上面，相当于标题
    btDevCells->m_btName->setText("名称");
    btDevCells->m_btAddr->setText("服务Uuid");
    btDevCells->m_btRssi->setText("空");
    //将item加入到listwidget中
    ui->serviceListWidget->addItem(items);
    //设置item的窗口为自定义的窗口
    ui->serviceListWidget->setItemWidget(items, btDevCells);

    //连接信号与槽(deviceDiscoveryAgent是代码中自己声明的对象,ui中没有，无法自动生成槽函数;需要自己写槽函数，自己连接)
    /*------------- m_deviceDiscoveryAgent设备搜索对象的信号槽 -------------*/
    connect(m_deviceDiscoveryAgent, &QBluetoothDeviceDiscoveryAgent::deviceDiscovered, this, &BluetoothConnect::deviceDiscoveredSlot);//发现设备
    connect(m_deviceDiscoveryAgent, &QBluetoothDeviceDiscoveryAgent::finished, this, &BluetoothConnect::deviceSearchFinishedSlot);//搜索完毕
    void (QBluetoothDeviceDiscoveryAgent:: *deviceSearchErrorOccurred)(QBluetoothDeviceDiscoveryAgent::Error) = &QBluetoothDeviceDiscoveryAgent::error;//有重载
    connect(m_deviceDiscoveryAgent, deviceSearchErrorOccurred, this, &BluetoothConnect::deviceSearchErrorOccurredSlot);//设备搜索发生错误

    /*------------- m_btSocket蓝牙套接字的信号槽 ----------------*/
    void (QBluetoothSocket:: *socketErrorOccurred)(QBluetoothSocket::SocketError) = &QBluetoothSocket::error;
    connect(m_btSocket, socketErrorOccurred, this, &BluetoothConnect::socketErrorOccurredSlot); //错误处理槽函数
    connect(m_btSocket, &QBluetoothSocket::connected, this, &BluetoothConnect::socketConnectedSlot);//连接成功

    /*------------- m_serviceDiscoveryAgent服务发现对象的信号槽 ---------------*/
    connect(m_serviceDiscoveryAgent, &QBluetoothServiceDiscoveryAgent::serviceDiscovered, this, &BluetoothConnect::serviceDiscoveredSlot); //发现一个服务
    connect(m_serviceDiscoveryAgent, &QBluetoothServiceDiscoveryAgent::finished, this, &BluetoothConnect::serviceSearchFinishedSlot); //服务搜索完毕
}

BluetoothConnect::~BluetoothConnect()
{
    delete ui;
}

void BluetoothConnect::on_searchButton_clicked() //点击Search按钮后开始搜索设备
{
    //如果已经搜索过1次，那么设备列表可能会大于1，需要先清空设备列表
    //但是标题也会被清除，所以重新添加标题
    if(ui->deviceListWidget->count() > 1)
    {
        ui->deviceListWidget->clear();

        //设置设备列表
        QListWidgetItem* item = new QListWidgetItem();
        //创建自定义窗口,放入到listwidget中
        BluetoothDeviceCell* btDevCell = new BluetoothDeviceCell();
        //设置item的高
        item->setSizeHint(QSize(ui->deviceListWidget->width(), btDevCell->height()));
        //设置label显示
        btDevCell->m_btName->setText("名称");
        btDevCell->m_btAddr->setText("地址");
        btDevCell->m_btRssi->setText("信号强度");

        //将item加入到listwidget中
        ui->deviceListWidget->addItem(item);
        //设置item的窗口为自定义的窗口
        ui->deviceListWidget->setItemWidget(item, btDevCell);
    }
    m_deviceDiscoveryAgent->start(); //开启设备搜索

    ui->searchButton->setEnabled(false);//搜索过程中,search按钮不可点击
    ui->statusLabel->setText("Searching for devices......");
}

void BluetoothConnect::deviceDiscoveredSlot(QBluetoothDeviceInfo btDevInfo) //发现设备后将设备添加到listwidget中
{
        QListWidgetItem* item = new QListWidgetItem(); //声明一个item
        BluetoothDeviceCell* btDevCell = new BluetoothDeviceCell(); //声明一个蓝牙设备单元

        item->setSizeHint(QSize(ui->deviceListWidget->width(), btDevCell->height())); //设定item的尺寸
        //搜索到的设备信息存到设备单元中
        btDevCell->m_btName->setText(btDevInfo.name());
        btDevCell->m_btAddr->setText(btDevInfo.address().toString());
        btDevCell->m_btRssi->setText(QString::number(btDevInfo.rssi()));

        //将设备单元添加到deviceListWidget中
        ui->deviceListWidget->addItem(item);
        ui->deviceListWidget->setItemWidget(item,btDevCell);
        //设备信息list新增一个设备信息
        m_devInfos.append(btDevInfo);

}

void BluetoothConnect::deviceSearchFinishedSlot() //设备搜索完成
{
    ui->statusLabel->setText("Double Click a device to searhc for services");
    QMessageBox::about(this, "提示", "设备搜索完成");
//    qDebug() << "搜索已完成";
    ui->searchButton->setEnabled(true); //一次搜索完之后才可以重新点击search键
}

void BluetoothConnect::deviceSearchErrorOccurredSlot(QBluetoothDeviceDiscoveryAgent::Error error) //搜索蓝牙设备出现错误
{
    qDebug() << error;
    //警告对话框
    QMessageBox::warning(this, "警告!", "搜索蓝牙设备发生错误，请检查蓝牙是否开启");
}


void BluetoothConnect::on_deviceListWidget_itemActivated(QListWidgetItem *item) //点击设备列表中的item
{


    /***
     * 点击设备后，搜索设备的服务。点击服务后，根据服务和设备进行连接。并将socket的准备接收与主窗口BluetoothDebugger的revDataTextEdit的显示连接
    */
    //在开始service搜索之前先重置服务列表
    //如果已经搜索过1次，那么服务列表可能会大于1，需要先清空服务列表
    //但是标题也会被清除，所以重新添加标题
    if(ui->serviceListWidget->count() > 1)
    {
        ui->serviceListWidget->clear();

        //设置服务列表的标题
        QListWidgetItem* items = new QListWidgetItem();
        //创建自定义窗口，放入到listwidget中
        BluetoothDeviceCell* btDevCells = new BluetoothDeviceCell();
        //设定item的尺寸
        items->setSizeHint(QSize(ui->serviceListWidget->width(), btDevCells->height()));
        //设置label的显示
        //第一个加进去的item在最上面，相当于标题
        btDevCells->m_btName->setText("名称");
        btDevCells->m_btAddr->setText("服务Uuid");
        btDevCells->m_btRssi->setText("空");
        //将item加入到listwidget中
        ui->serviceListWidget->addItem(items);
        //设置item的窗口为自定义的窗口
        ui->serviceListWidget->setItemWidget(items, btDevCells);
    }

    QWidget* widget = ui->deviceListWidget->itemWidget(item); //将点击的item信息取出来
    BluetoothDeviceCell* btDevCell = (BluetoothDeviceCell*) widget; //强制类型转换为DeviceCell设备单元
    qDebug() << btDevCell->m_btAddr->text(); //输出设备地址
    m_btAddress = QBluetoothAddress(btDevCell->m_btAddr->text());//记录下来选中的设备的地址.后边点击service进行连接时,使用该地址
    m_serviceDiscoveryAgent->setRemoteAddress(QBluetoothAddress(btDevCell->m_btAddr->text())); //要搜索的服务是当前激活的这个设备的服务
    m_serviceDiscoveryAgent->start(); //开始搜索

    ui->statusLabel->setText("Searching for services......");

    //!!!!不同设备所允许的服务不同,需要寻找设备支持的服务有什么


}

void BluetoothConnect::serviceDiscoveredSlot(const QBluetoothServiceInfo& serviceInfo) //发现服务
{
    //serviceInfo中没有设备地址
    if(serviceInfo.serviceName().isEmpty())
        return;
    //!!!用serviceClassUuids才能得到有效的Uuid
    QList<QBluetoothUuid> btUuids = serviceInfo.serviceClassUuids();
    //每个list中只有1个元素
    qDebug() << btUuids[0];
    QBluetoothUuid btUuid = btUuids[0];

    QListWidgetItem* item = new QListWidgetItem();
    BluetoothDeviceCell* btDevCell = new BluetoothDeviceCell();

    item->setSizeHint(QSize(ui->serviceListWidget->width(), btDevCell->height()));

    btDevCell->m_btName->setText(serviceInfo.serviceName());
    btDevCell->m_btAddr->setText(btUuid.toString());
    btDevCell->m_btRssi->setText("");

    ui->serviceListWidget->addItem(item);
    ui->serviceListWidget->setItemWidget(item, btDevCell);

    m_btUuids.append(btUuid);

}

void BluetoothConnect::serviceSearchFinishedSlot() //服务搜索完成
{
    ui->statusLabel->setText("Double Click a service to connect to bluetooth");
    QMessageBox::about(this, "Hint", "Service Search Finished!");
}


void BluetoothConnect::on_serviceListWidget_itemActivated(QListWidgetItem *item) //激活服务列表的项目
{
    QWidget* widget = ui->serviceListWidget->itemWidget(item); //将点击的item信息取出来
    BluetoothDeviceCell* btDevCell = (BluetoothDeviceCell*) widget; //强制类型转换为DeviceCell设备单元
    qDebug() << m_btAddress << btDevCell->m_btAddr->text();
    m_btSocket->connectToService(m_btAddress,QBluetoothUuid(btDevCell->m_btAddr->text()),QIODevice::ReadWrite); //根据设备地址与Uuid连接
    ui->statusLabel->setText("Bluetooth connecting......");
}


void BluetoothConnect::socketErrorOccurredSlot(QBluetoothSocket::SocketError error) //socket发生错误
{
    switch(error)
    {
        case QBluetoothSocket::NoSocketError:
            break;
        case QBluetoothSocket::UnknownSocketError:
            qDebug() << "Error: Unknown Socket Error!";
            break;
        case QBluetoothSocket::RemoteHostClosedError:
            qDebug() << "Error: Remote Host Closed Error!";
            break;
        case QBluetoothSocket::HostNotFoundError:
            qDebug() << "Error: Host Not Found Error!";
            break;
        case QBluetoothSocket::ServiceNotFoundError:
            qDebug() << "Error: Service Not Found Error!";
            break;
        case QBluetoothSocket::NetworkError:
            qDebug() << "Error: Network Error!";
            break;
        case QBluetoothSocket::UnsupportedProtocolError:
            qDebug() << "Error: Unsupported Protocol Error!";
            break;
        case QBluetoothSocket::OperationError:
            qDebug() << "Error: Operation Error!";
            break;
    }
}

void BluetoothConnect::socketConnectedSlot() //socket连接成功
{
    ui->statusLabel->setText("");
    QMessageBox::about(this, "Information", "Socket Connected Successfully!");
    //隐去Bluetooth Connect窗口
    this->close();

}


void BluetoothConnect::on_inquiryTypeCheckBox_stateChanged(int isChecked) //查询类型的checkbox状态改变
{
    if(isChecked == Qt::Checked)
    {
        m_deviceDiscoveryAgent->setInquiryType(QBluetoothDeviceDiscoveryAgent::GeneralUnlimitedInquiry);
    }
    else if(isChecked == Qt::Unchecked)
    {
        m_deviceDiscoveryAgent->setInquiryType(QBluetoothDeviceDiscoveryAgent::LimitedInquiry);
    }
}



