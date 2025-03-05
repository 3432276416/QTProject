#ifndef BLUETOOTHDEVICECELL_H
#define BLUETOOTHDEVICECELL_H

#include <QWidget>
#include <QLabel>
#include <QtBluetooth/QBluetoothServiceInfo>

namespace Ui {
class BluetoothDeviceCell;
}

class BluetoothDeviceCell : public QWidget
{
    Q_OBJECT

public:
    explicit BluetoothDeviceCell(QWidget *parent = nullptr);
    ~BluetoothDeviceCell();
    QLabel* m_btName;
    QLabel* m_btAddr;
    QLabel* m_btRssi;

private:
    Ui::BluetoothDeviceCell *ui;
};

#endif // BLUETOOTHDEVICECELL_H
