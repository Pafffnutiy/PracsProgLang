/********************************************************************************
** Form generated from reading UI file 'AUD3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUD3_H
#define UI_AUD3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AUD3Class
{
public:
    QAction *actionExit;
    QAction *actionHorizontal;
    QAction *actionVertical;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QWidget *tab_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QWidget *tab_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuView;

    void setupUi(QMainWindow *AUD3Class)
    {
        if (AUD3Class->objectName().isEmpty())
            AUD3Class->setObjectName(QString::fromUtf8("AUD3Class"));
        AUD3Class->resize(597, 400);
        actionExit = new QAction(AUD3Class);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionHorizontal = new QAction(AUD3Class);
        actionHorizontal->setObjectName(QString::fromUtf8("actionHorizontal"));
        actionVertical = new QAction(AUD3Class);
        actionVertical->setObjectName(QString::fromUtf8("actionVertical"));
        centralWidget = new QWidget(AUD3Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(64, 70, 471, 261));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(9, 9, 441, 201));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayoutWidget_3 = new QWidget(tab_2);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(9, 9, 451, 221));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayoutWidget = new QWidget(tab_3);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 441, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab_3, QString());
        AUD3Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AUD3Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AUD3Class->setStatusBar(statusBar);
        menuBar = new QMenuBar(AUD3Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 597, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        AUD3Class->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFile->addAction(actionExit);
        menuView->addAction(actionHorizontal);
        menuView->addAction(actionVertical);

        retranslateUi(AUD3Class);
        QObject::connect(actionExit, SIGNAL(triggered()), AUD3Class, SLOT(close()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AUD3Class);
    } // setupUi

    void retranslateUi(QMainWindow *AUD3Class)
    {
        AUD3Class->setWindowTitle(QApplication::translate("AUD3Class", "AUD3", nullptr));
        actionExit->setText(QApplication::translate("AUD3Class", "Exit", nullptr));
        actionHorizontal->setText(QApplication::translate("AUD3Class", "Horizontal", nullptr));
        actionVertical->setText(QApplication::translate("AUD3Class", "Vertical", nullptr));
#ifndef QT_NO_WHATSTHIS
        tabWidget->setWhatsThis(QApplication::translate("AUD3Class", "<html><head/><body><p>Tab 3</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AUD3Class", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AUD3Class", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AUD3Class", "Page", nullptr));
        menuFile->setTitle(QApplication::translate("AUD3Class", "File", nullptr));
        menuView->setTitle(QApplication::translate("AUD3Class", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AUD3Class: public Ui_AUD3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUD3_H
