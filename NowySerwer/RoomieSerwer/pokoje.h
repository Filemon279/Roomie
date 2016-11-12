#ifndef POKOJE_H
#define POKOJE_H

#include <QString>
#include <QTcpSocket>
#include <QDebug>

class Pokoje
{
public:
    Pokoje();
    int numer=1;
    QString haslo="";
    QString imie="";
    QString nazwisko="";
    QString checkIN="";
    QString checkOUT="";


};

#endif // POKOJE_H
