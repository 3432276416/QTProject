#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QObject>
#include<QDebug>
#include<QDir>
#include<QFile>
#include<QTimer>
#include<Thread>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();



private slots:
    void on_openfile_btn_clicked();

    void on_autoPlay_clicked(bool checked);
    void autoPlayPhoto();

    void on_preview_widget_clicked(const QModelIndex &index);

private:
    QString dirPath;
    QFile *file;
    QString wholePath;
    int fileNum;
    QVector<QString> photoList;
    bool autoPlay;
    float delayTime;
    QTimer timer;
    int index;

    void showGif(QString);


private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
