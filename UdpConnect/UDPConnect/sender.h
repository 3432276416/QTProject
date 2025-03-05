#ifndef SENDER_H
#define SENDER_H

#include <QWidget>
#include<QUdpSocket>
QT_BEGIN_NAMESPACE
namespace Ui {
class Sender;
}
QT_END_NAMESPACE

class Sender : public QWidget
{
    Q_OBJECT

public:
    Sender(QWidget *parent = nullptr);
    ~Sender();
    QUdpSocket* msocket;

private slots:
    void on_send_btn_clicked();

private:
    Ui::Sender *ui;
};
#endif // SENDER_H
