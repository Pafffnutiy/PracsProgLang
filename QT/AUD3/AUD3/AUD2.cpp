#include "AUD2.h"
#include <QAction>
#include <QPixmap>
#include <QPen>
#include <QPainter>
#include <QPoint>
#include <QVector>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QActionGroup>

AUD2::AUD2(QWidget *parent)
    : QMainWindow(parent), x{ 0 }, y{ 0 }
{
    ui.setupUi(this);
    //painter = new QPainter(this);
    clear = ui.toolbar->addAction("clear");
    ui.toolbar->addSeparator();
    QPixmap pixred("RED.jpg");
    QPixmap pixgreen("green.png");
    QPixmap pixblue("blue.png");
    QPixmap pixblack("black.jpg");
    red = ui.toolbar->addAction(QIcon(pixred), "Red");
    green = ui.toolbar->addAction(QIcon(pixgreen), "Green");
    blue = ui.toolbar->addAction(QIcon(pixblue), "Blue");
    black = ui.toolbar->addAction(QIcon(pixblack), "Black");
    ui.toolbar->addSeparator();
    traceMode = ui.toolbar->addAction("trace mode");
    QActionGroup* group = new QActionGroup(this);
    group->addAction(red);
    group->addAction(green);
    group->addAction(blue);
    group->addAction(black);
    black->setCheckable(true); black->setChecked(true);
    red->setCheckable(true);
    green->setCheckable(true);
    blue->setCheckable(true);
    traceMode->setCheckable(true);
    group->setExclusive(true);
    pen = new QPen();
    pen->setWidth(3);
    setMouseTracking(true);

    connect(red, SIGNAL(triggered()), this, SLOT(changeOnRed()));
    connect(green, SIGNAL(triggered()), this, SLOT(changeOnGreen()));
    connect(blue, SIGNAL(triggered()), this, SLOT(changeOnBlue()));
    connect(black, SIGNAL(triggered()), this, SLOT(changeOnBlack()));
    connect(clear, SIGNAL(triggered()), this, SLOT(clr()));
}

void AUD2::changeOnRed()
{
    pen->setBrush(Qt::red);
}

void AUD2::changeOnBlue()
{
    pen->setBrush(Qt::blue);
}

void AUD2::changeOnGreen()
{
    pen->setBrush(Qt::green);
}

void AUD2::changeOnBlack()
{
    pen->setBrush(Qt::black);
}

void AUD2::clr()
{
    points.clear();
    pointColors.clear();
    QWidget::repaint();
}

void AUD2::paintEvent(QPaintEvent* event)
{
    setMouseTracking(true);
    QPainter painter(this);
    if (points.size() > 1)
    {
        for (std::size_t i{ 0 }; i < points.size() - 1; ++i)
        {
            painter.setBrush(pointColors[i]);
            painter.setPen(QPen(pointColors[i], 3));
            painter.drawLine(points[i], points[i + 1]);
        }
    }
}

void AUD2::mousePressEvent(QMouseEvent* e)
{
    setMouseTracking(true);
    if (e->button() == Qt::LeftButton)
    {
        x = e->pos().x();
        y = e->pos().y();
        points.push_back(QPoint(x, y));
        if(points.size()>1)
            pointColors.push_back(pen->color());
    }

    if (e->button() == Qt::RightButton)
    {
        points.pop_back();
        pointColors.pop_back();
    }

    QWidget::repaint();
}

void AUD2::mouseMoveEvent(QMouseEvent* e)
{
    setMouseTracking(true);
    
    if (traceMode->isChecked())
    {
        points.push_back(QPoint(e->pos().x(), e->pos().y()));
        if (points.size() > 1)
            pointColors.push_back(pen->color());
    }
    else {
        points[points.size() - 1] = QPoint(e->pos().x(), e->pos().y());
    }
    update();
    QWidget::repaint();
}
