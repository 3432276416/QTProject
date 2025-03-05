#ifndef SERVER_H
#define SERVER_H
#include<QUdpSocket>
#include <QWidget>

namespace Ui {
class Server;
}

class Server : public QWidget
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = nullptr);
    ~Server();
    QUdpSocket* msocket;

private slots:
    void read_data();

    void on_checkBox_clicked(bool checked);

private:
    Ui::Server *ui;
};

#endif // SERVER_H
