#ifndef CONNCECTWIDGET_H
#define CONNCECTWIDGET_H

#include<QtBluetooth/QBluetoothDeviceDiscoveryAgent>
#include<QtBluetooth/QBluetoothLocalDevice>
#include<QtBluetooth/QBluetoothSocket>
#include <QtBluetooth/QBluetoothServiceDiscoveryAgent>
#include<QtBluetooth/QBluetoothUuid>
#include<QList>
#include<QtBluetooth/QBluetoothDeviceInfo>
#include<QTime>
#include<QDebug>
#include<QLabel>
#include<QListWidgetItem>
#include<QMessageBox>
#include <QWidget>

namespace Ui {
class ConncectWidget;
}

class ConncectWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ConncectWidget(QWidget *parent = nullptr);
    ~ConncectWidget();

private:
    QBluetoothDeviceDiscoveryAgent* deviceDiscoveryAgent;
    QBluetoothServiceDiscoveryAgent* serviceDiscoveryAgent;
    QBluetoothAddress curAdress;
    QBluetoothLocalDevice* btlocalDevicel;
    QList<QBluetoothDeviceInfo> btdevInfos;
    QList<QBluetoothUuid> btUunids;
    QBluetoothSocket* btSocket;



private slots:
    void on_searchBtn_clicked();

private:
    Ui::ConncectWidget *ui;
};

#endif // CONNCECTWIDGET_H
