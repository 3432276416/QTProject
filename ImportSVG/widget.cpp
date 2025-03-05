#include "widget.h"
#include "ui_widget.h"
#include<qsvgrenderer.h>
#include<QPainter>
#include<QFileDialog>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QString path=QFileDialog::getOpenFileName(this,"打开svg文件",".","SVG File(*.svg)");
    QSvgRenderer* svg_render=new QSvgRenderer;
    svg_render->load(path);
    QSize size=svg_render->defaultSize();
    QPixmap pix(size*1.8);
    pix.fill(Qt::transparent);

    QPainter painter(&pix);
    painter.setRenderHints(QPainter::Antialiasing);
    svg_render->render(&painter);

    ui->label->setPixmap(pix);
    ui->label->setScaledContents(true);
    ui->label->setAlignment(Qt::AlignCenter);
    qDebug()<<"画图";
}

