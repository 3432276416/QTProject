#include "bluetoothdebugger.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling); //在创建QApplication对象前调用，开启高分辨率屏幕支持
    QApplication a(argc, argv);
    BluetoothDebugger btDebugger;
    btDebugger.show();
    return a.exec();
}
