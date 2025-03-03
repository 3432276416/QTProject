#include "widget.h"
#include "ui_widget.h"
#include<QDebug>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
    server=new QTcpServer(this);
    socket=new QTcpSocket(this);

    connect(server,SIGNAL(newConnection()),this,SLOT(newConnectionSlot()));
}



void Widget::on_open_btn_clicked()
{
    ui->plainTextEdit->appendPlainText("连接客户端");
    ui->plainTextEdit->appendPlainText(ui->port_le->text());
    // server->listen(QHostAddress::Any,ui->port_le->text().toUInt());
    // QHostAddress address;
    // address.setAddress("192.168.114.233");
    // server->listen(address,ui->port_le->text().toUInt());
}

void Widget::newConnectionSlot()
{

    socket=server->nextPendingConnection();
    connect(socket,SIGNAL(readyRead()),this,SLOT(readyReadSlot()));
}

void Widget::readyReadSlot()
{
    QString buf;
    buf=socket->readAll();
    ui->plainTextEdit->appendPlainText(buf);
}


void Widget::on_send_btn_clicked()
{
    socket->write(ui->send_le->text().toUtf8());
}

