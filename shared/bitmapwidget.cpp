#include "bitmapwidget.h"
#include <QtGui>
BitmapWidget::BitmapWidget(QWidget *parent) :
    QWidget(parent)
{

}

void BitmapWidget::load(QString picture)
{
    QImage image;
    QByteArray array = QByteArray::fromBase64(picture.toUtf8());
    if( !image.loadFromData(array))
    {
        return;
    }
    _backGround = image;
     this->update();
//    this->repaint();
//    this->paintEvent(NULL);
}

void BitmapWidget::paintEvent(QPaintEvent *)
{
    QPainter paint(this);
    paint.drawImage(QRect(0,0,this->size().width(),this->size().height()),_backGround);
//    paint.drawImage(0,0, _backGround);
   // paint.setPen(Qt::blue);
    //paint.drawText(rect(), Qt::AlignCenter, tr("The Text"));
}
