#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>

class ColorCircle : public  QWidget
{    
    Q_OBJECT
public:
    //Constructors
    ColorCircle() = default;
    ColorCircle(QWidget* parrent);
    //Widget Methods
    void paintEvent(QPaintEvent* e) override;
    QSize minimumSizeHint()const override;

public slots:
    void setGreen();
    void setRed();
    void setYellow();
private:
    QPixmap currentColor;
    QPixmap yellowColor;
    QPixmap greenColor;
    QPixmap redColor;
};