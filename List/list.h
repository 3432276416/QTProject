#pragma once

#include <QMainWindow>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QTreeWidgetItem>
#include <QFileSystemModel>
#include <qfilesystemmodel.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class List;
}
QT_END_NAMESPACE

class List : public QMainWindow
{
    Q_OBJECT

public:
    List(QWidget *parent = nullptr);
    ~List();
private:
    QFileSystemModel *model;

private slots:
    void on_file_btn_clicked();

    void on_dir_btn_clicked();

    void on_confirm_btn_clicked();

    void on_filter_ckb_clicked();

    void on_parent_ckb_clicked();

private:
    Ui::List *ui;
};
