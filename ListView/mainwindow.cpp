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

