#ifndef HOTEL_USTAWIENIA_H
#define HOTEL_USTAWIENIA_H

#include <QMainWindow>
#include "hotel_server.h"
#import "pokoje.h"
#import "bazadanych.h"
namespace Ui {
class Hotel_ustawienia;
}

class Hotel_ustawienia : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hotel_ustawienia(QWidget *parent = 0);
    ~Hotel_ustawienia();
     Hotel_server *server;
    std::list<Pokoje> pokoje;
   // std::list<Pokoje>::iterator it;

private:
    Ui::Hotel_ustawienia *ui;
    void odswiezBaze();

private slots:
    void receiveLogs(QString text);
    void receiveUser(QString text);

};



#endif // HOTEL_MAIN_H
