
#include "sender.h"
#include"server.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sender w1;
    w1.show();
    Server w2;
    w2.show();
    return a.exec();
}
