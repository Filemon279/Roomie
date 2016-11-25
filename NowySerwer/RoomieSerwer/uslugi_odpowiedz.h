#ifndef USLUGI_ODPOWIEDZ_H
#define USLUGI_ODPOWIEDZ_H

#include <QDialog>
#include <QTcpSocket>
#include "bazadanych.h"

namespace Ui {
class Uslugi_odpowiedz;
}

class Uslugi_odpowiedz : public QDialog
{
    Q_OBJECT

public:
    explicit Uslugi_odpowiedz(QWidget *parent = 0, int number=0);
    ~Uslugi_odpowiedz();
    int nr;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Uslugi_odpowiedz *ui;
};

#endif // USLUGI_ODPOWIEDZ_H
