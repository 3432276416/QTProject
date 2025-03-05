#include "sender.h"
#include "ui_sender.h"

Sender::Sender(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Sender)
{
    ui->setupUi(this);
    msocket=new QUdpSocket();
}

Sender::~Sender()
{
    delete ui;
}

void Sender::on_send_btn_clicked()
{
//单播
 // qint64 len = mSocket->writeDatagram(ui->textEdit-
//>toPlainText().toUtf8(),QHostAddress("192.168.137.1"),6677);

 //组播ip地址范围：224.0.0.0-239.255.255.255
 //qint64 len = mSocket->writeDatagram(ui->textEdit->toPlainText().toUtf8(),QHostAddress("224.0.0.100"),6677);
 //广播
    qint64 len=msocket->writeDatagram(ui->lineEdit->text().toUtf8(),
                                QHostAddress::Broadcast,6677);
}

