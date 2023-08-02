#include <QApplication>
#include <QWidget>
#include <QSlider>
#include <QVBoxLayout>
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>

#include "ColorCircle.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    //w.move(900, 400);

    ColorCircle* cCircle = new ColorCircle(&w);
//    cCircle->setFixedSize(100, 100);

    QSlider* cSlider = new QSlider(&w);
    cSlider->setOrientation(Qt::Horizontal);
    cSlider->setMaximum(100);
    cSlider->setMinimum(0);

    auto* layout = new QVBoxLayout(&w);
    layout->addWidget(cCircle);
    layout->addWidget(cSlider);

    QObject::connect(cSlider, &QSlider::valueChanged, cCircle, [cSlider, cCircle](int value)
                     {
                         if (value < 33)
                             cCircle->setGreen();
                         else if (value >= 33 && value < 66)
                             cCircle->setYellow();
                         else if (value >= 66)
                             cCircle->setRed();
                     });

    w.show();
    a.exec();

    delete layout;
    delete cCircle;
    delete cSlider;
    return 0;
}
