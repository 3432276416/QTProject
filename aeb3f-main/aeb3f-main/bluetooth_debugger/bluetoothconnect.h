#ifndef BLUETOOTHCONNECT_H
#define BLUETOOTHCONNECT_H

#include <QWidget>
#include <QtBluetooth/QBluetoothLocalDevice>
#include <QtBluetooth/QBluetoothDeviceDiscoveryAgent>
#include <QtBluetooth/QBluetoothSocket>
#include <QtBluetooth/QBluetoothUuid>
#include <QtBluetooth/QBluetoothServiceDiscoveryAgent>
#include <QTimer>
#include <QDebug>
#include <QListWidgetItem>
#include <QLabel>
#include <QMessageBox>
#include "bluetoothdevicecell.h"

//Bluetooth Base Uuid,基础的Uuid不知道能完成什么功能
//const QString SERVICE_UUID = "00001101-0000-1000-8000-00805F9B34FB"; //直接把字符串放到QBluetoothUuid()里会报错


namespace Ui {
class BluetoothConnect;
}

class BluetoothConnect : public QWidget
{
    Q_OBJECT

public:
    explicit BluetoothConnect(QWidget *parent = nullptr);
    ~BluetoothConnect();

    QBluetoothSocket* m_btSocket;//蓝牙套接字

private:
    Ui::BluetoothConnect *ui;
    QBluetoothDeviceDiscoveryAgent* m_deviceDiscoveryAgent; //设备搜索object
    QBluetoothServiceDiscoveryAgent* m_serviceDiscoveryAgent; //服务搜索object
    QBluetoothAddress m_btAddress; //要连接的设备的地址
    //!!!直接从item中获取uuid,不用单独保存
//    QBluetoothUuid m_btUuid; //要连接的服务的Uuid
    QBluetoothLocalDevice* m_btLocalDevice; //蓝牙本地设备
    QList<QBluetoothDeviceInfo> m_devInfos; //设备信息list
    QList<QBluetoothUuid> m_btUuids; //蓝牙Uuidlist
    //不能通过直接传入serviceInfo的方式连接，因为点击列表中的服务得到的是一个item,item中只包含了service的name,uuid.所以只能通过设备地址，uuid的方式来连接
//    QBluetoothServiceInfo m_serviceInfo; //要连接的服务信息

private slots:
    void on_searchButton_clicked();
    void deviceDiscoveredSlot(QBluetoothDeviceInfo btDevInfo);
    void deviceSearchFinishedSlot();
    void deviceSearchErrorOccurredSlot(QBluetoothDeviceDiscoveryAgent::Error error);
    void on_deviceListWidget_itemActivated(QListWidgetItem *item);
    void serviceDiscoveredSlot(const QBluetoothServiceInfo& serviceInfo);
    void serviceSearchFinishedSlot();
    void on_serviceListWidget_itemActivated(QListWidgetItem *item);
    void socketErrorOccurredSlot(QBluetoothSocket::SocketError error);
    void socketConnectedSlot();
    void on_inquiryTypeCheckBox_stateChanged(int isChecked);

};

#endif // BLUETOOTHCONNECT_H
