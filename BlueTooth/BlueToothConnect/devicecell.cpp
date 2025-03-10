#include "devicecell.h"
#include "ui_devicecell.h"

deviceCell::deviceCell(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::deviceCell)
{
    ui->setupUi(this);
    btName=ui->name_label;
    btAddr=ui->addr_label;
    btRiss = ui->riss_label;
}

deviceCell::~deviceCell()
{
    delete ui;
}
