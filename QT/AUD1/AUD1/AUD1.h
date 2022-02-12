#pragma once

#include <QtWidgets/QWidget>
#include "ui_AUD1.h"

class AUD1 : public QWidget
{
    Q_OBJECT

public:
    AUD1(QWidget *parent = Q_NULLPTR);

    void move_button_1();
    void move_button_2();
    void move_button_3();

    void Timer();
private:
    Ui::AUD1Class ui;
};
