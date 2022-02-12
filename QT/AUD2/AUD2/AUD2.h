#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AUD2.h"

class AUD2 : public QMainWindow
{
    Q_OBJECT

public:
    AUD2(QWidget *parent = Q_NULLPTR);

public slots:
    void changeOnRed();
    void changeOnGreen();
    void changeOnBlue();
    void changeOnBlack();
    void clr();

protected:
    void paintEvent(QPaintEvent* event);
    void mousePressEvent(QMouseEvent* e);
    void mouseMoveEvent(QMouseEvent* e);

private:
    QPen* pen;
    QAction* clear;
    QAction* red;
    QAction* green;
    QAction* blue;
    QAction* black;
    QAction* traceMode;
    QVector<QPoint> points;
    QVector<QColor> pointColors; //black = 2, red = 7, green = 8, blue = 9
    int x, y;
    Ui::AUD2Class ui;
};
