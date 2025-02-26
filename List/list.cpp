#include "list.h"
#include "./ui_list.h"
#include <QFileDialog>
List::List(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::List)
{
     //将分割布局的垂直方向尺寸策略也设置为扩展的
     ui->splitterMain->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    model = new QFileSystemModel(this);
    model->setRootPath(QDir::currentPath());
    
    ui->setupUi(this);
    ui->treeView->setModel(model);
    ui->tableView->setModel(model);
    ui->listView->setModel(model);

}

List::~List()
{
    delete ui;
}

void List::on_file_btn_clicked()
{
    
}


void List::on_dir_btn_clicked()
{

}


void List::on_confirm_btn_clicked()
{

}


void List::on_filter_ckb_clicked()
{

}


void List::on_parent_ckb_clicked()
{

}

