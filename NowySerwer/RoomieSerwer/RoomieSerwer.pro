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
    hotel_wyslij.cpp

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
    hotel_wyslij.h

FORMS    += \
    hotel_menu.ui \
    hotel_ustawienia.ui \
    hotel_ustawienia.ui \
    hotel_zamelduj.ui \
    hotel_pokoje.ui \
    hotel_wyslij.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
