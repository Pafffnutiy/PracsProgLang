#include "AUD3.h"
#include "AUD2.h"
#include <QPushButton>

AUD3::AUD3(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //ui.gridLayout_2->setColumnStretch(0, 1);
    //ui.gridLayout_2->setColumnStretch(1, 1);
    //ui.gridLayout_2->setColumnStretch(2, 1);

    exit1 = new QPushButton(tr("&Exit"), this);
    clear1 = new QPushButton(tr("&Clear"), this);
    paint1 = new AUD2(this);

    exit2 = new QPushButton(tr("&Exit"), this);
    clear2 = new QPushButton(tr("&Clear"), this);
    paint2 = new AUD2(this);

    exit3 = new QPushButton(tr("&Exit"), this);
    clear3 = new QPushButton(tr("&Clear"), this);
    paint3 = new AUD2(this);

    ui.gridLayout_2->addWidget(exit1, 1, 0);
    ui.gridLayout_2->addWidget(clear1, 1, 2);
    ui.gridLayout_2->addWidget(paint1, 1, 1);

    ui.gridLayout->addWidget(exit2, 1, 0);
    ui.gridLayout->addWidget(clear2, 1, 2);
    ui.gridLayout->addWidget(paint2, 1, 1);

    ui.gridLayout_3->addWidget(exit3, 1, 0);
    ui.gridLayout_3->addWidget(clear3, 1, 2);
    ui.gridLayout_3->addWidget(paint3, 1, 1);

    connect(clear1, SIGNAL(clicked()), paint1, SLOT(clr()));
    connect(clear2, SIGNAL(clicked()), paint1, SLOT(clr()));
    connect(clear3, SIGNAL(clicked()), paint1, SLOT(clr()));
    connect(exit1, SIGNAL(clicked()), this, SLOT(close()));
    connect(exit2, SIGNAL(clicked()), this, SLOT(close()));
    connect(exit3, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui.actionHorizontal, &QAction::triggered, this, &AUD3::Hor);
    connect(ui.actionVertical, &QAction::triggered, this, &AUD3::Ver);
}

void AUD3::Hor()
{
    int cur = ui.tabWidget->currentIndex();
    if (cur == 0)
    {
        ui.gridLayout_2->addWidget(exit1, 1, 0);
        ui.gridLayout_2->addWidget(clear1, 1, 2);
        ui.gridLayout_2->addWidget(paint1, 1, 1);
    }
    else if (cur == 2)
    {
        ui.gridLayout->addWidget(exit2, 1, 0);
        ui.gridLayout->addWidget(clear2, 1, 2);
        ui.gridLayout->addWidget(paint2, 1, 1);
    }
    else if (cur = 1)
    {
        ui.gridLayout_3->addWidget(exit3, 1, 0);
        ui.gridLayout_3->addWidget(clear3, 1, 2);
        ui.gridLayout_3->addWidget(paint3, 1, 1);
    }
}

void AUD3::Ver()
{
    int cur = ui.tabWidget->currentIndex();
    if (cur == 0)
    {
        ui.gridLayout_2->addWidget(exit1, 0, 1);
        ui.gridLayout_2->addWidget(clear1, 2, 1);
        ui.gridLayout_2->addWidget(paint1, 1, 1);

    }
    else if (cur == 2) {
        ui.gridLayout->addWidget(exit2, 0, 1);
        ui.gridLayout->addWidget(clear2, 2, 1);
        ui.gridLayout->addWidget(paint2, 1, 1);
    }
    else if (cur == 1)
    {
        ui.gridLayout_3->addWidget(exit3, 0, 1);
        ui.gridLayout_3->addWidget(clear3, 2, 1);
        ui.gridLayout_3->addWidget(paint3, 1, 1);
    }
}
