/********************************************************************************
** Form generated from reading UI file 'hotel_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_MENU_H
#define UI_HOTEL_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Hotel_menu
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Zamelduj;
    QPushButton *pushButton_Wymelduj;
    QPushButton *pushButton_Zarzadzaj;
    QPushButton *pushButton_Ustawienia;

    void setupUi(QDialog *Hotel_menu)
    {
        if (Hotel_menu->objectName().isEmpty())
            Hotel_menu->setObjectName(QStringLiteral("Hotel_menu"));
        Hotel_menu->resize(882, 490);
        Hotel_menu->setStyleSheet(QStringLiteral("#Hotel_menu{border-image: url(:/img/img/main_bg.jpg);}"));
        gridLayout_2 = new QGridLayout(Hotel_menu);
        gridLayout_2->setSpacing(20);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(20, 20, 20, 20);
        groupBox = new QGroupBox(Hotel_menu);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 50);\n"
"color:white;"));

        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Hotel_menu);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QLatin1String("#groupBox_2{color:white}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_Zamelduj = new QPushButton(groupBox_2);
        pushButton_Zamelduj->setObjectName(QStringLiteral("pushButton_Zamelduj"));
        pushButton_Zamelduj->setMinimumSize(QSize(0, 80));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        pushButton_Zamelduj->setFont(font1);
        pushButton_Zamelduj->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        horizontalLayout_2->addWidget(pushButton_Zamelduj);

        pushButton_Wymelduj = new QPushButton(groupBox_2);
        pushButton_Wymelduj->setObjectName(QStringLiteral("pushButton_Wymelduj"));
        pushButton_Wymelduj->setMinimumSize(QSize(0, 80));
        pushButton_Wymelduj->setFont(font1);
        pushButton_Wymelduj->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        horizontalLayout_2->addWidget(pushButton_Wymelduj);

        pushButton_Zarzadzaj = new QPushButton(groupBox_2);
        pushButton_Zarzadzaj->setObjectName(QStringLiteral("pushButton_Zarzadzaj"));
        pushButton_Zarzadzaj->setMinimumSize(QSize(0, 80));
        pushButton_Zarzadzaj->setFont(font1);
        pushButton_Zarzadzaj->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        horizontalLayout_2->addWidget(pushButton_Zarzadzaj);

        pushButton_Ustawienia = new QPushButton(groupBox_2);
        pushButton_Ustawienia->setObjectName(QStringLiteral("pushButton_Ustawienia"));
        pushButton_Ustawienia->setMinimumSize(QSize(0, 80));
        pushButton_Ustawienia->setFont(font1);
        pushButton_Ustawienia->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        horizontalLayout_2->addWidget(pushButton_Ustawienia);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(Hotel_menu);

        QMetaObject::connectSlotsByName(Hotel_menu);
    } // setupUi

    void retranslateUi(QDialog *Hotel_menu)
    {
        Hotel_menu->setWindowTitle(QApplication::translate("Hotel_menu", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Hotel_menu", "Powiadomienia", 0));
        groupBox_2->setTitle(QApplication::translate("Hotel_menu", "Menu", 0));
        pushButton_Zamelduj->setText(QApplication::translate("Hotel_menu", "Zamelduj", 0));
        pushButton_Wymelduj->setText(QApplication::translate("Hotel_menu", "Wy\305\233lij komunikat", 0));
        pushButton_Zarzadzaj->setText(QApplication::translate("Hotel_menu", "Zarz\304\205dzaj", 0));
        pushButton_Ustawienia->setText(QApplication::translate("Hotel_menu", "Ustawienia", 0));
    } // retranslateUi

};

namespace Ui {
    class Hotel_menu: public Ui_Hotel_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_MENU_H
