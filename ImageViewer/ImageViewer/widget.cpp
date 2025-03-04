#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>
#include<QFileInfo>
#include<QFileInfoList>
#include<QMessageBox>
#include<QMovie>
#include<QDebug>
#include<QCheckBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    index=0;
    autoPlay=false;
    connect(&timer,SIGNAL(timeout()),this,SLOT(autoPlay));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_openfile_btn_clicked()
{
    dirPath=QFileDialog::getExistingDirectory(this);
    QDir dir(dirPath);
    QStringList files;
    QFileInfoList fileInfoList=dir.entryInfoList();
   ui->photoPath->setItemData(0,dirPath);
    for(int i=0;i<fileInfoList.count();i++)
    {
        QFileInfo info=fileInfoList.at(i);
        QString path=info.fileName();
        photoList.append(path);
        if(info.fileName()=='.'||info.fileName()=="..")
        {
            continue;
        }
        QListWidgetItem* item=new QListWidgetItem(QIcon(path),info.fileName());
        ui->preview_widget->addItem(item);
    }

}


void Widget::on_autoPlay_clicked(bool checked)
{
    if(ui->time_edit->text().isEmpty())
    {

        QMessageBox::warning(this,"提示","没有填写间隔时间");
        ui->autoPlay->setCheckState(Qt::Unchecked);
        return;
    }

    if(checked)
    {
        delayTime=ui->time_edit->text().toFloat();
        timer.start(delayTime*1000);
        autoPlay=true;
    }
    else
    {
        timer.stop();
        delayTime=0;
        autoPlay=false;
    }
}

void Widget::autoPlayPhoto()
{

    QString path=photoList.at(index);
    if(autoPlay)
    {
        QString realPath=dirPath+'/'+path;
        if(realPath.endsWith(".gif")||realPath.endsWith(".GIF"))
        {
            showGif(realPath);
            index++;
        }
        else
        {
            ui->photoShow->setScaledContents(true);
            ui->photoShow->setPixmap(QPixmap(path));
            if(index==photoList.count()-1)
            {
                timer.stop();
                index=0;
                if(!autoPlay)
                {
                    autoPlay=true;
                }
            }
            else
            {
                index++;
            }
        }
    }
}

void Widget::showGif(QString path)
{
    QMovie *movie = new QMovie(path); // path图片路径
    movie->start(); //开始播放动态图
    ui->photoShow->setMovie(movie); //将图片设置为为动态
    ui->photoShow->setScaledContents(true); //尽可能完整的播放整张动图 ，此处要设置为
}

void Widget::on_preview_widget_clicked(const QModelIndex &inex)
{
        if(autoPlay)
        {
            autoPlay=false;
            ui->autoPlay->setCheckState(Qt::Unchecked);
            timer.stop();
        }
        index=ui->preview_widget->row(ui->preview_widget->currentItem());
        QString path=dirPath+"/";
        path.append(photoList.at(index));
        qDebug()<<path;
        if(path.endsWith(".gif")||path.endsWith(".GIF"))
        {
            showGif(path);
            index++;
        }
        else
        {
            ui->photoShow->setScaledContents(true);
            ui->photoShow->setPixmap(QPixmap(path));
        }
}

