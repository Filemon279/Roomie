#ifndef HOTEL_MENU_H
#define HOTEL_MENU_H

#include <QDialog>
#include "hotel_ustawienia.h"
#include "hotel_pokoje.h"
#include "hotel_wyslij.h"
#include "hotel_zamelduj.h"


namespace Ui {
class Hotel_menu;
}

class Hotel_menu : public QDialog
{
    Q_OBJECT

public:
    explicit Hotel_menu(QWidget *parent = 0);
    ~Hotel_menu();

private slots:
    void on_pushButton_Ustawienia_clicked();

    void on_pushButton_Zarzadzaj_clicked();

    void on_pushButton_Wymelduj_clicked();

    void on_pushButton_Zamelduj_clicked();

private:
    Ui::Hotel_menu *ui;
    Hotel_ustawienia *Ustawienia;
    Hotel_pokoje *Pokoje;
    Hotel_wyslij *Wyslij;
    Hotel_zamelduj *Zamelduj;
};

#endif // HOTEL_MENU_H
