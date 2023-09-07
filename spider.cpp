#include "spider.h"
#include <QIcon>
#include <QPixmap>

Spider::Spider(QWidget *parent)
    : QWidget(parent)
{
    Qt::WindowFlags flags=Qt::Widget;
    flags|=Qt::WindowStaysOnTopHint;
    flags|=Qt::CustomizeWindowHint;
    flags|=Qt::WindowTitleHint;
    flags|=Qt::WindowCloseButtonHint;


    QPixmap pix("WomanAndDog.jpg");
    QPixmap pix2("Water lilies.jpg");
    QBrush brush(pix);
    QBrush brush2(pix2);

    QPalette pal;
    //pal.setColor(QPalette::Active,QPalette::Window,Qt::green);
    //pal.setColor(QPalette::Inactive,QPalette::Window,Qt::darkGreen);
    pal.setBrush(QPalette::Active,QPalette::Window,brush);
    pal.setBrush(QPalette::Inactive,QPalette::Window,brush2);
    this->setPalette(pal);

    this->setWindowOpacity(0.85);

    QIcon icon("icon1.ico");
    this->setWindowIcon(icon);



    this->setWindowFlags(flags);
    this->setWindowTitle("Lab1-QT2023");

}

Spider::~Spider()
{
}

