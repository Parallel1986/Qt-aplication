#include "ColorCircle.h"

    ColorCircle::ColorCircle(QWidget* parrent)
    {
        setParent(parrent);
        setToolTip("This is magic circle");
        setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
        greenColor = QPixmap("..\\img\\green.png");
        redColor = QPixmap("..\\img\\red.png");
        yellowColor = QPixmap("..\\img\\yellow.png");
        currentColor = greenColor;
        setGeometry(currentColor.rect());
    }
    //Widget Methods
    void ColorCircle::paintEvent(QPaintEvent* e)
    {
        QPainter p(this);
        p.drawPixmap(e->rect(), currentColor);
    }
    QSize ColorCircle::minimumSizeHint()const
    {
        return QSize(100, 100);
    }


    void ColorCircle::setGreen()
    {
        currentColor = greenColor;
        QWidget::update();        
    }
    void ColorCircle::setRed()
    {
        currentColor = redColor;
        QWidget::update();
    }
    void ColorCircle::setYellow()
    {
        currentColor = yellowColor;
        QWidget::update();
    }