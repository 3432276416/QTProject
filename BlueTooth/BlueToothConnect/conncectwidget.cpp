#include "conncectwidget.h"
#include "ui_conncectwidget.h"
#include"devicecell.h"
ConncectWidget::ConncectWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ConncectWidget)
{
    ui->setupUi(this);

    // deviceDiscoveryAgent=new QBluetoothDeviceDiscoveryAgent(this);
    // btlocalDevicel=new QBluetoothLocalDevice();
    // btSocket=new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);
    // QBluetoothAddress adapterAddress = btlocalDevicel->address(); //使用默认蓝牙适配器
    // serviceDiscoveryAgent = new QBluetoothServiceDiscoveryAgent(adapterAddress); //创建服务发现对象

    //设置设备列表
    QListWidgetItem* item = new QListWidgetItem();
    //创建自定义窗口,放入到listwidget中
    deviceCell* btDevCell = new deviceCell();
    //设置item的高
    item->setSizeHint(QSize(ui->deviceListWidget->width(), btDevCell->height()));
    //设置label显示
    //第一个加进去的item在最上面，相当于标题
    btDevCell->btName->setText("名称");
    btDevCell->btAddr->setText("地址");
    btDevCell->btRiss->setText("信号强度");

    //将item加入到listwidget中
    ui->deviceListWidget->addItem(item);
    //设置item的窗口为自定义的窗口
    ui->deviceListWidget->setItemWidget(item, btDevCell);

    //将item加入到listwidget中
    ui->deviceListWidget->addItem(item);
    //设置item的窗口为自定义的窗口
    ui->deviceListWidget->setItemWidget(item, btDevCell);

    //设置服务列表的标题
    QListWidgetItem* items = new QListWidgetItem();
    //创建自定义窗口，放入到listwidget中
    deviceCell* btDevCells = new deviceCell();
    //设定item的尺寸
    items->setSizeHint(QSize(ui->serviceListWidget->width(), btDevCells->height()));
    //设置label的显示
    //第一个加进去的item在最上面，相当于标题
    btDevCells->btName->setText("名称");
    btDevCells->btAddr->setText("服务Uuid");
    btDevCells->btRiss->setText("空");
    //将item加入到listwidget中
    ui->serviceListWidget->addItem(items);
    //设置item的窗口为自定义的窗口
    ui->serviceListWidget->setItemWidget(items, btDevCells);
}

ConncectWidget::~ConncectWidget()
{
    delete ui;
}

void ConncectWidget::on_searchBtn_clicked()
{
    if(ui->deviceListWidget->count()>1)
    {
        ui->deviceListWidget->clear();
        QListWidgetItem* item=new QListWidgetItem();
        deviceCell* cell=new deviceCell();
        item->setSizeHint(QSize(ui->deviceListWidget->height(),ui->deviceListWidget->width()));
        cell->btName->setText("名称");
        cell->btAddr->setText("地址");
        cell->btRiss->setText("信号强度");
        ui->deviceListWidget->addItem(item);
        ui->deviceListWidget->setItemWidget(item,cell);
    }
}

