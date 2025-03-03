/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Server
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *open_btn;
    QPushButton *closeBtn;
    QLineEdit *send_le;
    QLineEdit *port_le;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName("Server");
        Server->resize(383, 600);
        plainTextEdit = new QPlainTextEdit(Server);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(30, 30, 341, 141));
        open_btn = new QPushButton(Server);
        open_btn->setObjectName("open_btn");
        open_btn->setGeometry(QRect(60, 330, 61, 31));
        closeBtn = new QPushButton(Server);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setGeometry(QRect(140, 330, 61, 31));
        send_le = new QLineEdit(Server);
        send_le->setObjectName("send_le");
        send_le->setGeometry(QRect(40, 240, 311, 71));
        port_le = new QLineEdit(Server);
        port_le->setObjectName("port_le");
        port_le->setGeometry(QRect(130, 190, 113, 20));
        label = new QLabel(Server);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 210, 61, 31));
        label_2 = new QLabel(Server);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 190, 40, 12));

        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QWidget *Server)
    {
        Server->setWindowTitle(QCoreApplication::translate("Server", "Widget", nullptr));
        open_btn->setText(QCoreApplication::translate("Server", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
        closeBtn->setText(QCoreApplication::translate("Server", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("Server", "\345\217\221\351\200\201\347\252\227\345\217\243:", nullptr));
        label_2->setText(QCoreApplication::translate("Server", "\347\253\257\345\217\243\345\217\267:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
