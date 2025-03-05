#include "bluetoothdevicecell.h"
#include "ui_bluetoothdevicecell.h"

BluetoothDeviceCell::BluetoothDeviceCell(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BluetoothDeviceCell)
{
    ui->setupUi(this);

    m_btName = ui->nameLabel;
    m_btAddr = ui->addrLabel;
    m_btRssi = ui->rssiLabel;
}

BluetoothDeviceCell::~BluetoothDeviceCell()
{
    delete ui;
}
