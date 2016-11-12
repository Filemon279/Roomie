/********************************************************************************
** Form generated from reading UI file 'hotel_pokoje.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_POKOJE_H
#define UI_HOTEL_POKOJE_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotel_pokoje
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_pokoje;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *Table_pokoje;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_polaczenie;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_info;
    QGroupBox *groupBox_logs;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEdit;

    void setupUi(QDialog *Hotel_pokoje)
    {
        if (Hotel_pokoje->objectName().isEmpty())
            Hotel_pokoje->setObjectName(QStringLiteral("Hotel_pokoje"));
        Hotel_pokoje->resize(1035, 514);
        Hotel_pokoje->setMinimumSize(QSize(0, 50));
        Hotel_pokoje->setStyleSheet(QStringLiteral("#Hotel_pokoje{border-image: url(:/img/img/main_bg.jpg);}"));
        horizontalLayout_2 = new QHBoxLayout(Hotel_pokoje);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_2 = new QWidget(Hotel_pokoje);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_pokoje = new QGroupBox(widget_2);
        groupBox_pokoje->setObjectName(QStringLiteral("groupBox_pokoje"));
        groupBox_pokoje->setStyleSheet(QStringLiteral("#groupBox_pokoje{color:white}"));
        verticalLayout_4 = new QVBoxLayout(groupBox_pokoje);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Table_pokoje = new QTableWidget(groupBox_pokoje);
        Table_pokoje->setObjectName(QStringLiteral("Table_pokoje"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        Table_pokoje->setFont(font);
        Table_pokoje->setStyleSheet(QLatin1String("background-color: rgba(0,0,0, 100);\n"
"color:white;"));

        verticalLayout_4->addWidget(Table_pokoje);

        widget_3 = new QWidget(groupBox_pokoje);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 50));

        horizontalLayout_4->addWidget(pushButton_3);


        verticalLayout_4->addWidget(widget_3);


        gridLayout_2->addWidget(groupBox_pokoje, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_2);

        widget = new QWidget(Hotel_pokoje);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("#groupBox_logs{color:white}"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_polaczenie = new QGroupBox(widget);
        groupBox_polaczenie->setObjectName(QStringLiteral("groupBox_polaczenie"));
        groupBox_polaczenie->setStyleSheet(QStringLiteral("#groupBox_polaczenie{color:white}"));
        verticalLayout_2 = new QVBoxLayout(groupBox_polaczenie);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_info = new QLabel(groupBox_polaczenie);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_info->setFont(font1);

        verticalLayout_2->addWidget(label_info);


        gridLayout_3->addWidget(groupBox_polaczenie, 1, 0, 1, 1);

        groupBox_logs = new QGroupBox(widget);
        groupBox_logs->setObjectName(QStringLiteral("groupBox_logs"));
        verticalLayout_3 = new QVBoxLayout(groupBox_logs);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        textEdit = new QTextEdit(groupBox_logs);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 100);\n"
"color:white;"));

        verticalLayout_3->addWidget(textEdit);


        gridLayout_3->addWidget(groupBox_logs, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(Hotel_pokoje);

        QMetaObject::connectSlotsByName(Hotel_pokoje);
    } // setupUi

    void retranslateUi(QDialog *Hotel_pokoje)
    {
        Hotel_pokoje->setWindowTitle(QApplication::translate("Hotel_pokoje", "Dialog", 0));
        groupBox_pokoje->setTitle(QApplication::translate("Hotel_pokoje", "Wszystkie pokoje", 0));
        pushButton->setText(QApplication::translate("Hotel_pokoje", "Zapisz Zmiany", 0));
        pushButton_2->setText(QApplication::translate("Hotel_pokoje", "Od\305\233wie\305\274", 0));
        pushButton_3->setText(QApplication::translate("Hotel_pokoje", "Dodaj", 0));
        groupBox_polaczenie->setTitle(QApplication::translate("Hotel_pokoje", "Status Po\305\202\304\205czenia", 0));
        label_info->setText(QApplication::translate("Hotel_pokoje", "Skontaktuj si\304\231 z administratorem", 0));
        groupBox_logs->setTitle(QApplication::translate("Hotel_pokoje", "Historia Logi", 0));
    } // retranslateUi

};

namespace Ui {
    class Hotel_pokoje: public Ui_Hotel_pokoje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_POKOJE_H
