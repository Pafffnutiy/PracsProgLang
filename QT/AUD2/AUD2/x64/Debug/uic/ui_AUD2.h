/********************************************************************************
** Form generated from reading UI file 'AUD2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUD2_H
#define UI_AUD2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AUD2Class
{
public:
    QWidget *centralWidget;
    QToolBar *toolbar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AUD2Class)
    {
        if (AUD2Class->objectName().isEmpty())
            AUD2Class->setObjectName(QString::fromUtf8("AUD2Class"));
        AUD2Class->resize(600, 400);
        centralWidget = new QWidget(AUD2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        AUD2Class->setCentralWidget(centralWidget);
        toolbar = new QToolBar(AUD2Class);
        toolbar->setObjectName(QString::fromUtf8("toolbar"));
        AUD2Class->addToolBar(Qt::TopToolBarArea, toolbar);
        AUD2Class->insertToolBarBreak(toolbar);
        statusBar = new QStatusBar(AUD2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AUD2Class->setStatusBar(statusBar);

        retranslateUi(AUD2Class);

        QMetaObject::connectSlotsByName(AUD2Class);
    } // setupUi

    void retranslateUi(QMainWindow *AUD2Class)
    {
        AUD2Class->setWindowTitle(QApplication::translate("AUD2Class", "AUD2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUD2Class: public Ui_AUD2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUD2_H
