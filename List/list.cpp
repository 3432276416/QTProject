#include "list.h"
#include "./ui_list.h"
#include <QFileDialog>
#include <qfiledialog.h>
List::List(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::List)
{
     //将分割布局的垂直方向尺寸策略也设置为扩展的

    model = new QFileSystemModel(this);
    model->setRootPath(QDir::currentPath());
    
    ui->setupUi(this);
    ui->treeView->setModel(model);
    ui->tableView->setModel(model);
    ui->listView->setModel(model);
    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
    ui->listView,SLOT(setRootIndex(QModelIndex)));

    connect(ui->treeView,SIGNAL(clicked(QModelIndex)),
    ui->tableView,SLOT(setRootIndex(QModelIndex)));

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
    model->fil
}


void List::on_filter_ckb_clicked()
{
    QString flts=ui->filter_cb->currentText();
    QStringList  filter=flts.split(";",Qt::SkipEmptyParts);
    model->setNameFilters(filter);
}


void List::on_parent_ckb_clicked()
{

}


void List::on_treeView_clicked(const QModelIndex &index)
{
    ui->fileName_lab->setText(model->fileName(index));
    ui->filePath_lab->setText(model->filePath(index));

    if(model->isDir(index)){
        ui->filetype_lab->setText("文件夹");
    }else{
        ui->filetype_lab->setText("文件");
    }
}


void List::on_actionopen_triggered()
{
        QString path=QFileDialog::getExistingDirectory(this,"打开文件",QDir::currentPath());
        if(!path.isEmpty())
        {
            model->setRootPath(path);
            ui->treeView->setRootIndex(model->index(path));

        }
}

