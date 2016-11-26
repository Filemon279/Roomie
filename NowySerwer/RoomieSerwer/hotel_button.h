#ifndef HOTEL_BUTTON_H
#define HOTEL_BUTTON_H

#include <QObject>
#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QMouseEvent>

class Hotel_button : public QPushButton
{
Q_OBJECT
public:
   Hotel_button(QWidget *parent,QString Info_ID);
   QString getInfo_ID();
   QString Info_ID_OUT;
   void ExplodeInGreatStyle();

signals:
   send_name(QString,Hotel_button*);
   removeOUT(Hotel_button*);

private slots:
   void mousePressEvent(QMouseEvent *e);

};

#endif // HOTEL_BUTTON_H
