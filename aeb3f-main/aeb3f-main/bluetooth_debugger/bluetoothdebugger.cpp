#include "bluetoothdebugger.h"
#include "./ui_bluetoothdebugger.h"

BluetoothDebugger::BluetoothDebugger(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BluetoothDebugger)
{
    ui->setupUi(this);
    setWindowTitle("Bluetooth Debugger");

    m_btConnect = new BluetoothConnect(); //创建BluetoothConnect的对象

    connect(m_btConnect->m_btSocket, &QBluetoothSocket::readyRead, this, &BluetoothDebugger::socketReadyReadSlot); //将接收到的数据打印在主窗口上

}

BluetoothDebugger::~BluetoothDebugger()
{
    delete ui;
}


void BluetoothDebugger::on_connectButton_clicked() //点击connect按钮,弹出m_btConnect窗口
{
    m_btConnect->show();
}



void BluetoothDebugger::on_clearButton_clicked() //清除数据接收区
{
    ui->revDataTextBrowser->clear();
}

void BluetoothDebugger::socketReadyReadSlot() //socket准备好读取
{
    char data[100];
    qint64 len = m_btConnect->m_btSocket->read((char*)data,100);

    QByteArray byteArray((char*)data, len);
    if(m_isClose == false) //窗口显示打开
    {
        ui->revDataTextBrowser->append("接收:");
        ui->revDataTextBrowser->append(byteArray);//添加到窗口
    }

}




void BluetoothDebugger::on_sendButton_clicked() //点击发送按钮
{
    //被发送的数据
    QByteArray dataSent = ui->sendDataLineEdit->text().toUtf8();
    if(m_isClose == false) //窗口显示打开,蓝牙发送使能;窗口显示关闭,蓝牙发送失能
    {
        //将发送的数据也打印到窗口上
        ui->revDataTextBrowser->append("发送:");
        ui->revDataTextBrowser->append(dataSent);
        //通过socket发送数据
        m_btConnect->m_btSocket->write(dataSent);
    }
}


void BluetoothDebugger::on_disconnectButton_clicked() //断开连接按钮
{
    if(m_btConnect->m_btSocket->state() == QBluetoothSocket::ConnectedState) //已经连接上了
    {
        m_btConnect->m_btSocket->disconnectFromService();
    }
    else if(m_btConnect->m_btSocket->state() == QBluetoothSocket::UnconnectedState) //未连接
    {
        QMessageBox::warning(this, "Warning", "You haven't connected to a device!");
    }
}


void BluetoothDebugger::on_closeButton_clicked() //关闭窗口显示按钮
{
    if(m_isClose == true) //点击前为关闭状态
    {
        m_isClose = false; //点击后为开启状态
        ui->closeButton->setText("Close"); //按钮显示close
    }
    else //点击前为打开状态
    {
        m_isClose = true; //点击后为关闭状态
        ui->closeButton->setText("Open"); //按钮显示open
    }
}

