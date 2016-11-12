/********************************************************************************
** Form generated from reading UI file 'hotel_wymelduj.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_WYMELDUJ_H
#define UI_HOTEL_WYMELDUJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Hotel_wymelduj
{
public:

    void setupUi(QDialog *Hotel_wymelduj)
    {
        if (Hotel_wymelduj->objectName().isEmpty())
            Hotel_wymelduj->setObjectName(QStringLiteral("Hotel_wymelduj"));
        Hotel_wymelduj->resize(1104, 561);
        Hotel_wymelduj->setStyleSheet(QStringLiteral("#Hotel_wymelduj{border-image: url(:/img/img/main_bg.jpg);}"));

        retranslateUi(Hotel_wymelduj);

        QMetaObject::connectSlotsByName(Hotel_wymelduj);
    } // setupUi

    void retranslateUi(QDialog *Hotel_wymelduj)
    {
        Hotel_wymelduj->setWindowTitle(QApplication::translate("Hotel_wymelduj", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Hotel_wymelduj: public Ui_Hotel_wymelduj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_WYMELDUJ_H
