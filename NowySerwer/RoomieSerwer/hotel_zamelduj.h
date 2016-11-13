#ifndef HOTEL_ZAMELDUJ_H
#define HOTEL_ZAMELDUJ_H

#include <QDialog>
#include "bazadanych.h"

namespace Ui {
class Hotel_zamelduj;
}

class Hotel_zamelduj : public QDialog
{
    Q_OBJECT

public:
    explicit Hotel_zamelduj(QWidget *parent = 0);
    ~Hotel_zamelduj();

private slots:
    void on_pushButton_dodaj_clicked();

private:
    Ui::Hotel_zamelduj *ui;
    bool sprawdzCzyWolny(QString numer);
};

#endif // HOTEL_ZAMELDUJ_H
