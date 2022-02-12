/********************************************************************************
** Form generated from reading UI file 'AUD1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUD1_H
#define UI_AUD1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AUD1Class
{
public:
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;

    void setupUi(QWidget *AUD1Class)
    {
        if (AUD1Class->objectName().isEmpty())
            AUD1Class->setObjectName(QString::fromUtf8("AUD1Class"));
        AUD1Class->resize(640, 480);
        button1 = new QPushButton(AUD1Class);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setGeometry(QRect(30, 60, 50, 25));
        button2 = new QPushButton(AUD1Class);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setGeometry(QRect(430, 130, 50, 25));
        button3 = new QPushButton(AUD1Class);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setGeometry(QRect(160, 260, 50, 25));

        retranslateUi(AUD1Class);

        QMetaObject::connectSlotsByName(AUD1Class);
    } // setupUi

    void retranslateUi(QWidget *AUD1Class)
    {
        AUD1Class->setWindowTitle(QApplication::translate("AUD1Class", "AUD1", nullptr));
        button1->setText(QApplication::translate("AUD1Class", "1", nullptr));
        button2->setText(QApplication::translate("AUD1Class", "3", nullptr));
        button3->setText(QApplication::translate("AUD1Class", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUD1Class: public Ui_AUD1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUD1_H
