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

signals:
   send_name(QString,QPushButton*);

private slots:
   void mousePressEvent(QMouseEvent *e);

};

#endif // HOTEL_BUTTON_H
