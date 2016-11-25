#ifndef USLUGI_INFO_H
#define USLUGI_INFO_H

#include <QDialog>
#include <QPushButton>
#include "bazadanych.h"
#include <QPointer>
#include "uslugi_odpowiedz.h"
#include "hotel_button.h"

namespace Ui {
class Uslugi_info;
}

class Uslugi_info : public QDialog
{
    Q_OBJECT

public:
    explicit Uslugi_info(QWidget *parent = 0,Hotel_button *b=0);
    ~Uslugi_info();
    Hotel_button* bb;
    int nr;
private slots:
    getNumber(int number);

    void on_pushButton_usun_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_wyslij_odp_clicked();

private:
    Ui::Uslugi_info *ui;
    Uslugi_odpowiedz *Odp;


};

#endif // USLUGI_INFO_H
