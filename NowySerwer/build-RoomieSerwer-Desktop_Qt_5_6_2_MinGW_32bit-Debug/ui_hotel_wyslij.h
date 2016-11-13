/********************************************************************************
** Form generated from reading UI file 'hotel_wyslij.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_WYSLIJ_H
#define UI_HOTEL_WYSLIJ_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotel_wyslij
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QTableWidget *Table_pokoje;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_issp;
    QLabel *label_6;
    QLabel *label_5;
    QRadioButton *radioButton_question;
    QLabel *label_7;
    QRadioButton *radioButton_exclamation;
    QLabel *label_4;
    QRadioButton *radioButton_dolar;
    QLabel *label_3;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_info;

    void setupUi(QDialog *Hotel_wyslij)
    {
        if (Hotel_wyslij->objectName().isEmpty())
            Hotel_wyslij->setObjectName(QStringLiteral("Hotel_wyslij"));
        Hotel_wyslij->resize(1060, 565);
        Hotel_wyslij->setStyleSheet(QStringLiteral("#Hotel_wyslij{border-image: url(:/img/img/main_bg.jpg);}"));
        horizontalLayout_2 = new QHBoxLayout(Hotel_wyslij);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_2 = new QWidget(Hotel_wyslij);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        Table_pokoje = new QTableWidget(widget_2);
        Table_pokoje->setObjectName(QStringLiteral("Table_pokoje"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        Table_pokoje->setFont(font1);
        Table_pokoje->setStyleSheet(QLatin1String("background-color: rgba(0,0,0, 80);\n"
"color:white;"));

        gridLayout_3->addWidget(Table_pokoje, 1, 0, 1, 1);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        gridLayout_3->addWidget(pushButton, 2, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_2);

        widget = new QWidget(Hotel_wyslij);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        gridLayout_4->addWidget(pushButton_2, 8, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 6, 0, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        radioButton_issp = new QRadioButton(groupBox);
        radioButton_issp->setObjectName(QStringLiteral("radioButton_issp"));
        radioButton_issp->setChecked(true);

        gridLayout_2->addWidget(radioButton_issp, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(0, 40));
        label_6->setStyleSheet(QLatin1String("background-image: url(:/img/img/notiimg2.png);\n"
" background-repeat: no-repeat;\n"
" background-position: right;"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 40));
        label_5->setStyleSheet(QLatin1String("background-image: url(:/img/img/notiimg3.png);\n"
" background-repeat: no-repeat;\n"
" background-position: right;"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 0, 5, 1, 1);

        radioButton_question = new QRadioButton(groupBox);
        radioButton_question->setObjectName(QStringLiteral("radioButton_question"));
        radioButton_question->setChecked(false);

        gridLayout_2->addWidget(radioButton_question, 0, 4, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(0, 40));
        label_7->setStyleSheet(QLatin1String("background-image: url(:/img/img/notiimg4.png);\n"
" background-repeat: no-repeat;\n"
" background-position: right;"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 0, 7, 1, 1);

        radioButton_exclamation = new QRadioButton(groupBox);
        radioButton_exclamation->setObjectName(QStringLiteral("radioButton_exclamation"));
        radioButton_exclamation->setChecked(false);

        gridLayout_2->addWidget(radioButton_exclamation, 0, 6, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 40));
        label_4->setStyleSheet(QLatin1String("background-image: url(:/img/img/notiimg.png);\n"
" background-repeat: no-repeat;\n"
" background-position: right;"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        radioButton_dolar = new QRadioButton(groupBox);
        radioButton_dolar->setObjectName(QStringLiteral("radioButton_dolar"));
        radioButton_dolar->setStyleSheet(QStringLiteral(""));
        radioButton_dolar->setChecked(false);

        gridLayout_2->addWidget(radioButton_dolar, 0, 8, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color:white"));

        gridLayout_4->addWidget(label_3, 4, 0, 1, 1);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 80));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        textEdit->setFont(font2);
        textEdit->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 80);\n"
"color:white"));

        gridLayout_4->addWidget(textEdit, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font2);
        lineEdit->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 80);\n"
"color:white"));

        gridLayout_4->addWidget(lineEdit, 3, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:white"));

        gridLayout_4->addWidget(label_2, 2, 0, 1, 1);

        label_info = new QLabel(widget);
        label_info->setObjectName(QStringLiteral("label_info"));

        gridLayout_4->addWidget(label_info, 7, 0, 1, 1);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(Hotel_wyslij);

        QMetaObject::connectSlotsByName(Hotel_wyslij);
    } // setupUi

    void retranslateUi(QDialog *Hotel_wyslij)
    {
        Hotel_wyslij->setWindowTitle(QApplication::translate("Hotel_wyslij", "Dialog", 0));
        label->setText(QApplication::translate("Hotel_wyslij", "Wybierz Adresata", 0));
        pushButton->setText(QApplication::translate("Hotel_wyslij", "Zaznacz Wszystkich", 0));
        pushButton_2->setText(QApplication::translate("Hotel_wyslij", "Wy\305\233lij", 0));
        groupBox->setTitle(QApplication::translate("Hotel_wyslij", "Ikona powiadomienia", 0));
        radioButton_issp->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
        radioButton_question->setText(QString());
        label_7->setText(QString());
        radioButton_exclamation->setText(QString());
        label_4->setText(QString());
        radioButton_dolar->setText(QString());
        label_3->setText(QApplication::translate("Hotel_wyslij", "Wiadomo\305\233\304\207 (max.120 znak\303\263w)", 0));
        label_2->setText(QApplication::translate("Hotel_wyslij", "Tytu\305\202", 0));
        label_info->setText(QApplication::translate("Hotel_wyslij", "Label_info", 0));
    } // retranslateUi

};

namespace Ui {
    class Hotel_wyslij: public Ui_Hotel_wyslij {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_WYSLIJ_H
