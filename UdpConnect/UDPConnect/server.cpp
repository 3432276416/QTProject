#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Server)
{
    ui->setupUi(this);
    msocket=new QUdpSocket();
    msocket->bind(QHostAddress::Any,6677);
    connect(msocket,SIGNAL(readyRead()),this,SLOT(read_data()));

}

Server::~Server()
{
    delete ui;
}


void Server::read_data()
{
    QByteArray bytes;
    QHostAddress address;
    quint16 port;
    bytes.resize(msocket->bytesAvailable());
    msocket->readDatagram(bytes.data(),bytes.size(),&address,&port);
    ui->listWidget->addItem(bytes);
}




void Server::on_checkBox_clicked(bool checked)
{
    if(checked)
    {
        msocket->joinMulticastGroup(QHostAddress("224.0.0.110"));
    }
    else
    {
        msocket->leaveMulticastGroup(QHostAddress("224.0.0.110"));
    }
}

