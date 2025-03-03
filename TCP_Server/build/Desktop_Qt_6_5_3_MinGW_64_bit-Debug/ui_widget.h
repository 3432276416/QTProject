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

class Ui_Widget
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *open_btn;
    QPushButton *closeBtn;
    QLineEdit *send_le;
    QLineEdit *port_le;
    QLabel *label;
    QLabel *label_2;
    QPushButton *send_btn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(383, 370);
        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(30, 30, 341, 141));
        open_btn = new QPushButton(Widget);
        open_btn->setObjectName("open_btn");
        open_btn->setGeometry(QRect(60, 330, 61, 31));
        closeBtn = new QPushButton(Widget);
        closeBtn->setObjectName("closeBtn");
        closeBtn->setGeometry(QRect(140, 330, 61, 31));
        send_le = new QLineEdit(Widget);
        send_le->setObjectName("send_le");
        send_le->setGeometry(QRect(40, 240, 311, 71));
        port_le = new QLineEdit(Widget);
        port_le->setObjectName("port_le");
        port_le->setGeometry(QRect(130, 190, 113, 20));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 210, 61, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 190, 40, 12));
        send_btn = new QPushButton(Widget);
        send_btn->setObjectName("send_btn");
        send_btn->setGeometry(QRect(220, 330, 71, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Server", nullptr));
        open_btn->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\234\215\345\212\241\345\231\250", nullptr));
        closeBtn->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255\346\234\215\345\212\241\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\347\252\227\345\217\243:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267:", nullptr));
        send_btn->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
