#include "bazadanych.h"


QSqlDatabase Baza = QSqlDatabase::addDatabase("QMYSQL");


BazaDanych::BazaDanych()
{

}

extern void initBaza(){
    Baza.setHostName("127.0.0.1");
    Baza.setDatabaseName("roomie");
    Baza.setUserName("root");
    Baza.setPassword("root");
}
