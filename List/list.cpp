#include "list.h"
#include "./ui_list.h"

List::List(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::List)
{
    ui->setupUi(this);
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

