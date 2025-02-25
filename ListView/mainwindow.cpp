#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::openDataFromFile(QString filename)
{
    QStringList stringList;
    QFile file(filename);
    if(!file.open(QIODevice::ReadOnly||QIODevice::Text))
    {
        QTextStream textStream(&file);
        while(!textSteam.atEnd())
        {
            QString line =textSteam.ReadLine();
            stringList.append(line);
        }
    }
}

void MainWindow::initData(QStringList list)
{
    QString header=list.at(0);
    QStringList headerList=header.split(QRegularExpression("\\s+"),Qt::SkipEmptyParts);
     for(int i=0;i<list.size();i++)
     {
         QStringList stringList = list.at(i).split(",");
         QString name = stringList.at(0);
         QString age = stringList.at(1);
         QString sex = stringList.at(2);
         QString address = stringList.at(3);
         QString phone = stringList.at(4);
        QString email = stringList.at(5);
     }
}

void MainWindow::on_actionacionOpen_triggered()
{

}


void MainWindow::on_actionactionPreview_triggered()
{

}


void MainWindow::on_actionaction_quit_triggered()
{

}


void MainWindow::on_actionaction_save_triggered()
{

}


void MainWindow::on_actionaction_add_triggered()
{

}

