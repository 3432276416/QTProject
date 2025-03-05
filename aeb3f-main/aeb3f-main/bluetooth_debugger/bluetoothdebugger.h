#ifndef BLUETOOTHDEBUGGER_H
#define BLUETOOTHDEBUGGER_H

#include <QMainWindow>
#include "bluetoothconnect.h"
#include <QCheckBox>

QT_BEGIN_NAMESPACE
namespace Ui { class BluetoothDebugger; }
QT_END_NAMESPACE

class BluetoothDebugger : public QMainWindow
{
    Q_OBJECT

public:
    BluetoothDebugger(QWidget *parent = nullptr);
    ~BluetoothDebugger();

private slots:
    void on_connectButton_clicked();
    void on_clearButton_clicked();
    void socketReadyReadSlot();
    void on_sendButton_clicked();
    void on_disconnectButton_clicked();
    void on_closeButton_clicked();

private:
    Ui::BluetoothDebugger *ui;
    //变量名中bluetooth缩写为bt
    BluetoothConnect* m_btConnect; //连接窗口是主窗口的子对象
    bool m_isClose = true; //数据的窗口显示是否为关闭状态。初始化为关闭
};
#endif // BLUETOOTHDEBUGGER_H
