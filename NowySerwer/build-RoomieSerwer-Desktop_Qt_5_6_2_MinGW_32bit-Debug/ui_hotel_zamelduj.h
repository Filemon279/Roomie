/********************************************************************************
** Form generated from reading UI file 'hotel_zamelduj.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_ZAMELDUJ_H
#define UI_HOTEL_ZAMELDUJ_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotel_zamelduj
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_dane;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_imie;
    QLineEdit *lineEdit_nazwisko;
    QLineEdit *lineEdit_nrPokoju;
    QLineEdit *lineEdit_inne;
    QLineEdit *lineEdit_haslo;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_6;
    QLabel *label_5;
    QCalendarWidget *calendar_checkIN;
    QCalendarWidget *calendar_checkOUT;
    QPushButton *pushButton_dodaj;
    QPushButton *pushButton_anuluj;

    void setupUi(QDialog *Hotel_zamelduj)
    {
        if (Hotel_zamelduj->objectName().isEmpty())
            Hotel_zamelduj->setObjectName(QStringLiteral("Hotel_zamelduj"));
        Hotel_zamelduj->resize(1001, 577);
        Hotel_zamelduj->setStyleSheet(QStringLiteral("#Hotel_zamelduj{border-image: url(:/img/img/main_bg.jpg);}"));
        horizontalLayout_2 = new QHBoxLayout(Hotel_zamelduj);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(Hotel_zamelduj);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_dane = new QGroupBox(widget);
        groupBox_dane->setObjectName(QStringLiteral("groupBox_dane"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_dane->sizePolicy().hasHeightForWidth());
        groupBox_dane->setSizePolicy(sizePolicy1);
        groupBox_dane->setStyleSheet(QLatin1String("#groupBox_dane{color:white;background-color: rgba(0, 0, 0, 30);}\n"
""));
        groupBox_dane->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_dane->setFlat(false);
        groupBox_dane->setCheckable(false);
        groupBox_dane->setChecked(false);
        gridLayout_2 = new QGridLayout(groupBox_dane);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_7 = new QLabel(groupBox_dane);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setStyleSheet(QStringLiteral("color:white"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 8, 1, 1, 1);

        label = new QLabel(groupBox_dane);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_dane);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color:white"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 6, 1, 1, 1);

        label_3 = new QLabel(groupBox_dane);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color:white"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 4, 1, 1, 1);

        label_2 = new QLabel(groupBox_dane);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:white"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 10, 1, 1, 2);

        lineEdit_imie = new QLineEdit(groupBox_dane);
        lineEdit_imie->setObjectName(QStringLiteral("lineEdit_imie"));
        lineEdit_imie->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        lineEdit_imie->setFont(font1);
        lineEdit_imie->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 110);\n"
"color:white"));

        gridLayout_2->addWidget(lineEdit_imie, 1, 1, 1, 2);

        lineEdit_nazwisko = new QLineEdit(groupBox_dane);
        lineEdit_nazwisko->setObjectName(QStringLiteral("lineEdit_nazwisko"));
        lineEdit_nazwisko->setMinimumSize(QSize(0, 40));
        lineEdit_nazwisko->setFont(font1);
        lineEdit_nazwisko->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 110);\n"
"color:white"));

        gridLayout_2->addWidget(lineEdit_nazwisko, 3, 1, 1, 2);

        lineEdit_nrPokoju = new QLineEdit(groupBox_dane);
        lineEdit_nrPokoju->setObjectName(QStringLiteral("lineEdit_nrPokoju"));
        lineEdit_nrPokoju->setMinimumSize(QSize(0, 40));
        lineEdit_nrPokoju->setFont(font1);
        lineEdit_nrPokoju->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 110);\n"
"color:white"));

        gridLayout_2->addWidget(lineEdit_nrPokoju, 5, 1, 1, 2);

        lineEdit_inne = new QLineEdit(groupBox_dane);
        lineEdit_inne->setObjectName(QStringLiteral("lineEdit_inne"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(50);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_inne->sizePolicy().hasHeightForWidth());
        lineEdit_inne->setSizePolicy(sizePolicy3);
        lineEdit_inne->setMinimumSize(QSize(0, 40));
        lineEdit_inne->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 110);\n"
"color:white"));

        gridLayout_2->addWidget(lineEdit_inne, 9, 1, 1, 1);

        lineEdit_haslo = new QLineEdit(groupBox_dane);
        lineEdit_haslo->setObjectName(QStringLiteral("lineEdit_haslo"));
        lineEdit_haslo->setMinimumSize(QSize(0, 40));
        lineEdit_haslo->setFont(font1);
        lineEdit_haslo->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 110);\n"
"color:white"));

        gridLayout_2->addWidget(lineEdit_haslo, 7, 1, 1, 2);


        verticalLayout_3->addWidget(groupBox_dane);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(Hotel_zamelduj);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 2);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setStyleSheet(QStringLiteral("color:white"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 1, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QStringLiteral("color:white"));
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        calendar_checkIN = new QCalendarWidget(widget_2);
        calendar_checkIN->setObjectName(QStringLiteral("calendar_checkIN"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(10);
        calendar_checkIN->setFont(font2);
        calendar_checkIN->setStyleSheet(QStringLiteral(""));
        calendar_checkIN->setMinimumDate(QDate(2015, 9, 14));
        calendar_checkIN->setMaximumDate(QDate(2279, 12, 31));
        calendar_checkIN->setFirstDayOfWeek(Qt::Monday);
        calendar_checkIN->setGridVisible(true);
        calendar_checkIN->setSelectionMode(QCalendarWidget::SingleSelection);
        calendar_checkIN->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendar_checkIN->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

        gridLayout->addWidget(calendar_checkIN, 1, 0, 1, 1);

        calendar_checkOUT = new QCalendarWidget(widget_2);
        calendar_checkOUT->setObjectName(QStringLiteral("calendar_checkOUT"));
        calendar_checkOUT->setFont(font2);
        calendar_checkOUT->setMinimumDate(QDate(2015, 10, 14));
        calendar_checkOUT->setMaximumDate(QDate(2279, 12, 31));
        calendar_checkOUT->setFirstDayOfWeek(Qt::Monday);
        calendar_checkOUT->setGridVisible(true);
        calendar_checkOUT->setSelectionMode(QCalendarWidget::SingleSelection);
        calendar_checkOUT->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

        gridLayout->addWidget(calendar_checkOUT, 1, 1, 1, 1);

        pushButton_dodaj = new QPushButton(widget_2);
        pushButton_dodaj->setObjectName(QStringLiteral("pushButton_dodaj"));
        pushButton_dodaj->setMinimumSize(QSize(0, 50));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_dodaj->setFont(font3);

        gridLayout->addWidget(pushButton_dodaj, 3, 0, 1, 1);

        pushButton_anuluj = new QPushButton(widget_2);
        pushButton_anuluj->setObjectName(QStringLiteral("pushButton_anuluj"));
        pushButton_anuluj->setMinimumSize(QSize(0, 50));
        pushButton_anuluj->setFont(font3);

        gridLayout->addWidget(pushButton_anuluj, 3, 1, 1, 1);


        horizontalLayout_2->addWidget(widget_2);


        retranslateUi(Hotel_zamelduj);

        QMetaObject::connectSlotsByName(Hotel_zamelduj);
    } // setupUi

    void retranslateUi(QDialog *Hotel_zamelduj)
    {
        Hotel_zamelduj->setWindowTitle(QApplication::translate("Hotel_zamelduj", "Dialog", 0));
        groupBox_dane->setTitle(QApplication::translate("Hotel_zamelduj", "Dane", 0));
        label_7->setText(QApplication::translate("Hotel_zamelduj", "Inne", 0));
        label->setText(QApplication::translate("Hotel_zamelduj", "Imi\304\231", 0));
        label_4->setText(QApplication::translate("Hotel_zamelduj", "Has\305\202o", 0));
        label_3->setText(QApplication::translate("Hotel_zamelduj", "Nr. Pokoju", 0));
        label_2->setText(QApplication::translate("Hotel_zamelduj", "Nazwisko", 0));
        label_6->setText(QApplication::translate("Hotel_zamelduj", "Check OUT", 0));
        label_5->setText(QApplication::translate("Hotel_zamelduj", "Check IN", 0));
        pushButton_dodaj->setText(QApplication::translate("Hotel_zamelduj", "Dodaj", 0));
        pushButton_anuluj->setText(QApplication::translate("Hotel_zamelduj", "Anuluj", 0));
    } // retranslateUi

};

namespace Ui {
    class Hotel_zamelduj: public Ui_Hotel_zamelduj {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_ZAMELDUJ_H
