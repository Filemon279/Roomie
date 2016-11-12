/********************************************************************************
** Form generated from reading UI file 'hotel_ustawienia.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_USTAWIENIA_H
#define UI_HOTEL_USTAWIENIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Hotel_ustawienia
{
public:

    void setupUi(QDialog *Hotel_ustawienia)
    {
        if (Hotel_ustawienia->objectName().isEmpty())
            Hotel_ustawienia->setObjectName(QStringLiteral("Hotel_ustawienia"));
        Hotel_ustawienia->resize(1076, 652);
        Hotel_ustawienia->setStyleSheet(QStringLiteral("#Hotel_ustawienia{border-image: url(:/img/img/main_bg.jpg);}"));

        retranslateUi(Hotel_ustawienia);

        QMetaObject::connectSlotsByName(Hotel_ustawienia);
    } // setupUi

    void retranslateUi(QDialog *Hotel_ustawienia)
    {
        Hotel_ustawienia->setWindowTitle(QApplication::translate("Hotel_ustawienia", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Hotel_ustawienia: public Ui_Hotel_ustawienia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_USTAWIENIA_H
