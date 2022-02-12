#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AUD3.h"
#include <qpushbutton.h>
#include "AUD2.h"

class AUD3 : public QMainWindow
{
    Q_OBJECT

public:
    AUD3(QWidget *parent = Q_NULLPTR);

public slots:
    void Hor();
    void Ver();

private:
    Ui::AUD3Class ui;
    QPushButton* exit1, * exit2, * exit3;
    QPushButton* clear1, * clear2, * clear3;
    AUD2* paint1, * paint2, * paint3;
};
