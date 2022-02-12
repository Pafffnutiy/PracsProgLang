#include "AUD2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AUD2 w;
    w.show();
    return a.exec();
}
