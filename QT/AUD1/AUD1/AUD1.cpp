#include "AUD1.h"
#include <random>
#include <qpropertyanimation.h>
#include <QTimer>

AUD1::AUD1(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

void AUD1::move_button_1()
{
    std::random_device rd;
    std::mt19937 mersenne(rd());

    std::size_t npos_x = mersenne() % 580;
    std::size_t npos_y = mersenne() % 450;

    QPropertyAnimation* animation = new QPropertyAnimation(ui.button1, "geometry");
    animation->setDuration(500);
    animation->setStartValue(QRect(ui.button1->geometry()));
    animation->setEndValue(QRect(npos_x, npos_y, 50, 25));

    animation->start();
}

void AUD1::move_button_2()
{
    std::random_device rd;
    std::mt19937 mersenne(rd());

    std::size_t npos_x = mersenne() % 580;
    std::size_t npos_y = mersenne() % 450;

    QPropertyAnimation* animation = new QPropertyAnimation(ui.button2, "geometry");
    animation->setDuration(500);
    animation->setStartValue(QRect(ui.button2->geometry()));
    animation->setEndValue(QRect(npos_x, npos_y, 50, 25));

    animation->start();
}

void AUD1::move_button_3()
{
    std::random_device rd;
    std::mt19937 mersenne(rd());

    std::size_t npos_x = mersenne() % 580;
    std::size_t npos_y = mersenne() % 450;

    QPropertyAnimation* animation = new QPropertyAnimation(ui.button3, "geometry");
    animation->setDuration(500);
    animation->setStartValue(QRect(ui.button3->geometry()));
    animation->setEndValue(QRect(npos_x, npos_y, 50, 25));

    animation->start();
}

void AUD1::Timer()
{
    QTimer* tmr = new QTimer(this);
    connect(tmr, &QTimer::timeout, this, &AUD1::move_button_1);
    connect(tmr, &QTimer::timeout, this, &AUD1::move_button_2);
    connect(tmr, &QTimer::timeout, this, &AUD1::move_button_3);

    tmr->start(5000);
}
