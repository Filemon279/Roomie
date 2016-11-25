#-------------------------------------------------
#
# Project created by QtCreator 2016-11-09T15:03:50
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RoomieSerwer
TEMPLATE = app


SOURCES += main.cpp\
    hotel_server.cpp \
    hotel_thread.cpp \
    pokoje.cpp \
    bazadanych.cpp \
    hotel_menu.cpp \
    hotel_ustawienia.cpp \
    hotel_zamelduj.cpp \
    hotel_pokoje.cpp \
    hotel_wyslij.cpp \
    flowlayout.cpp \
    uslugi_info.cpp \
    hotel_button.cpp \
    uslugi_odpowiedz.cpp

HEADERS  += \
    hotel_server.h \
    hotel_thread.h \
    pokoje.h \
    bazadanych.h \
    hotel_menu.h \
    hotel_ustawienia.h \
    hotel_ustawienia.h \
    hotel_zamelduj.h \
    hotel_pokoje.h \
    hotel_wyslij.h \
    flowlayout.h \
    uslugi_info.h \
    hotel_button.h \
    uslugi_odpowiedz.h

FORMS    += \
    hotel_menu.ui \
    hotel_ustawienia.ui \
    hotel_ustawienia.ui \
    hotel_zamelduj.ui \
    hotel_pokoje.ui \
    hotel_wyslij.ui \
    uslugi_info.ui \
    uslugi_odpowiedz.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
