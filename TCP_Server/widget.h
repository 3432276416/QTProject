#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QObject>
#include<QTcpServer>
#include<QTcpSocket>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QTcpServer *server;
    QTcpSocket *socket;

private slots:
    void on_open_btn_clicked();

    void newConnectionSlot();

    void readyReadSlot();

    void on_send_btn_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
