#include "mainwindow.h"
#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QScrollArea sa;

    QWidget*  pwgt = new QWidget;
    QPixmap   pix("C:/Users/USER/Pictures/france.jpg"); // use  your own picture



    QPalette pal;
    pal.setBrush(pwgt->backgroundRole(),QBrush(pix));
    pwgt->setPalette(pal);
    pwgt->setAutoFillBackground(true);
    pwgt->setFixedSize(pix.width(),pix.height());

    sa.setWidget(pwgt);
    sa.resize(450,250);

    sa.show();
    return a.exec();
}
