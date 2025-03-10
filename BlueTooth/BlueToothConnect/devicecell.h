#ifndef DEVICECELL_H
#define DEVICECELL_H

#include <QWidget>
#include<QLabel>
namespace Ui {
class deviceCell;
}

class deviceCell : public QWidget
{
    Q_OBJECT

public:
    explicit deviceCell(QWidget *parent = nullptr);
    ~deviceCell();
    QLabel* btName;
    QLabel* btAddr;
    QLabel* btRiss;

private:
    Ui::deviceCell *ui;
};

#endif // DEVICECELL_H
