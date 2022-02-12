#include "AUD1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AUD1 w;
    QBrush br(Qt::TexturePattern);
    br.setTextureImage(QImage("3.jpg"));
    QPalette plt = w.palette();
    plt.setBrush(QPalette::Background, br);
    w.setPalette(plt);
    w.show();
    w.Timer();
    return a.exec();
}
