/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionacionOpen;
    QAction *actionactionPreview;
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(380, 287);
        actionacionOpen = new QAction(MainWindow);
        actionacionOpen->setObjectName("actionacionOpen");
        actionacionOpen->setCheckable(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icons/open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionacionOpen->setIcon(icon);
        actionacionOpen->setMenuRole(QAction::NoRole);
        actionactionPreview = new QAction(MainWindow);
        actionactionPreview->setObjectName("actionactionPreview");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icons/export1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionactionPreview->setIcon(icon1);
        actionactionPreview->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 80, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionacionOpen);
        toolBar->addAction(actionactionPreview);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionacionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actionactionPreview->setText(QCoreApplication::translate("MainWindow", "\351\242\204\350\247\210", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
