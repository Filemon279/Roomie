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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotel_menu
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollArea_requests;
    QGridLayout *layout_request_old;
    QWidget *widget_requests;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Zamelduj;
    QPushButton *pushButton;
    QPushButton *pushButton_Wymelduj;
    QPushButton *pushButton_Zarzadzaj;
    QPushButton *pushButton_Ustawienia;
    QLabel *label_info;

    void setupUi(QDialog *Hotel_menu)
    {
        if (Hotel_menu->objectName().isEmpty())
            Hotel_menu->setObjectName(QStringLiteral("Hotel_menu"));
        Hotel_menu->resize(882, 490);
        Hotel_menu->setStyleSheet(QStringLiteral("#Hotel_menu{border-image: url(:/img/img/main_bg_2.jpg);}"));
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
        groupBox->setStyleSheet(QStringLiteral("#groupBox{background-color: rgba(0, 0, 0, 100);color:white;}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setStyleSheet(QStringLiteral("background-color:transparent;"));
        scrollArea->setWidgetResizable(true);
        scrollArea_requests = new QWidget();
        scrollArea_requests->setObjectName(QStringLiteral("scrollArea_requests"));
        scrollArea_requests->setGeometry(QRect(0, 0, 838, 258));
        scrollArea_requests->setStyleSheet(QStringLiteral(""));
        layout_request_old = new QGridLayout(scrollArea_requests);
        layout_request_old->setSpacing(0);
        layout_request_old->setObjectName(QStringLiteral("layout_request_old"));
        layout_request_old->setContentsMargins(0, 0, 0, 0);
        widget_requests = new QWidget(scrollArea_requests);
        widget_requests->setObjectName(QStringLiteral("widget_requests"));

        layout_request_old->addWidget(widget_requests, 0, 0, 1, 1);

        scrollArea->setWidget(scrollArea_requests);

        verticalLayout_2->addWidget(scrollArea);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Hotel_menu);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("#groupBox_2{background-color: rgba(0, 0, 0, 100);color:white;}"));
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
        pushButton_Zamelduj->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(216, 165, 85, 255), stop:1 rgba(246, 230,156, 255));"));

        horizontalLayout_2->addWidget(pushButton_Zamelduj);

        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 80));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(38, 45, 133, 255), stop:0.994318 rgba(0, 0, 0, 255));color:white"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_Wymelduj = new QPushButton(groupBox_2);
        pushButton_Wymelduj->setObjectName(QStringLiteral("pushButton_Wymelduj"));
        pushButton_Wymelduj->setMinimumSize(QSize(0, 80));
        pushButton_Wymelduj->setFont(font1);
        pushButton_Wymelduj->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(216, 165, 85, 255), stop:1 rgba(246, 230,156, 255));"));

        horizontalLayout_2->addWidget(pushButton_Wymelduj);

        pushButton_Zarzadzaj = new QPushButton(groupBox_2);
        pushButton_Zarzadzaj->setObjectName(QStringLiteral("pushButton_Zarzadzaj"));
        pushButton_Zarzadzaj->setMinimumSize(QSize(0, 80));
        pushButton_Zarzadzaj->setFont(font1);
        pushButton_Zarzadzaj->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(216, 165, 85, 255), stop:1 rgba(246, 230,156, 255));"));

        horizontalLayout_2->addWidget(pushButton_Zarzadzaj);

        pushButton_Ustawienia = new QPushButton(groupBox_2);
        pushButton_Ustawienia->setObjectName(QStringLiteral("pushButton_Ustawienia"));
        pushButton_Ustawienia->setMinimumSize(QSize(0, 80));
        pushButton_Ustawienia->setFont(font1);
        pushButton_Ustawienia->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(216, 165, 85, 255), stop:1 rgba(246, 230,156, 255));"));

        horizontalLayout_2->addWidget(pushButton_Ustawienia);


        gridLayout_2->addWidget(groupBox_2, 2, 0, 1, 1);

        label_info = new QLabel(Hotel_menu);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_info->setFont(font2);

        gridLayout_2->addWidget(label_info, 1, 0, 1, 1);


        retranslateUi(Hotel_menu);

        QMetaObject::connectSlotsByName(Hotel_menu);
    } // setupUi

    void retranslateUi(QDialog *Hotel_menu)
    {
        Hotel_menu->setWindowTitle(QApplication::translate("Hotel_menu", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Hotel_menu", "Powiadomienia", 0));
        groupBox_2->setTitle(QApplication::translate("Hotel_menu", "Menu", 0));
        pushButton_Zamelduj->setText(QApplication::translate("Hotel_menu", "Zamelduj", 0));
        pushButton->setText(QApplication::translate("Hotel_menu", "TEST ODBIERZ", 0));
        pushButton_Wymelduj->setText(QApplication::translate("Hotel_menu", "Wy\305\233lij komunikat", 0));
        pushButton_Zarzadzaj->setText(QApplication::translate("Hotel_menu", "Zarz\304\205dzaj", 0));
        pushButton_Ustawienia->setText(QApplication::translate("Hotel_menu", "Ustawienia", 0));
        label_info->setText(QApplication::translate("Hotel_menu", "Status", 0));
    } // retranslateUi

};

namespace Ui {
    class Hotel_menu: public Ui_Hotel_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_MENU_H
