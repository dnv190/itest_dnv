#ifndef BITMAPWIDGET_H
#define BITMAPWIDGET_H

#include <QWidget>
#include <QtGui>
class BitmapWidget : public QWidget
{
    Q_OBJECT
public:
    explicit BitmapWidget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void load(QString picture);
signals:

public slots:

private:
     QImage _backGround;
};

#endif // BITMAPWIDGET_H
