/********************************************************************************
** Form generated from reading UI file 'uslugi_odpowiedz.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USLUGI_ODPOWIEDZ_H
#define UI_USLUGI_ODPOWIEDZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Uslugi_odpowiedz
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QTextEdit *textEdit;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton;
    QLabel *label;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_info;

    void setupUi(QDialog *Uslugi_odpowiedz)
    {
        if (Uslugi_odpowiedz->objectName().isEmpty())
            Uslugi_odpowiedz->setObjectName(QStringLiteral("Uslugi_odpowiedz"));
        Uslugi_odpowiedz->resize(501, 335);
        Uslugi_odpowiedz->setStyleSheet(QLatin1String("#Uslugi_odpowiedz{border-image: url(:/img/img/info_bg.jpeg);}\n"
""));
        gridLayout_2 = new QGridLayout(Uslugi_odpowiedz);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton = new QPushButton(Uslugi_odpowiedz);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(29, 128, 189, 255), stop:1 rgba(46, 46, 46, 255));color:white"));

        gridLayout_2->addWidget(pushButton, 3, 1, 1, 1);

        pushButton_2 = new QPushButton(Uslugi_odpowiedz);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 50));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(29, 128, 189, 255), stop:1 rgba(46, 46, 46, 255));color:white"));

        gridLayout_2->addWidget(pushButton_2, 3, 0, 1, 1);

        groupBox = new QGroupBox(Uslugi_odpowiedz);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setStyleSheet(QStringLiteral(""));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        textEdit->setFont(font1);
        textEdit->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 150);color:white"));

        gridLayout_4->addWidget(textEdit, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 2);

        groupBox_2 = new QGroupBox(Uslugi_odpowiedz);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_3->addWidget(radioButton, 1, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 50));
        label->setBaseSize(QSize(0, 0));
        label->setStyleSheet(QStringLiteral("border-image: url(:/img/img/notiimg.png);"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_3->addWidget(radioButton_2, 1, 3, 1, 1);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout_3->addWidget(radioButton_4, 1, 7, 1, 1);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout_3->addWidget(radioButton_3, 1, 5, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/img/img/notiimg4.png);"));

        gridLayout_3->addWidget(label_4, 1, 6, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/img/img/notiimg2.png);"));

        gridLayout_3->addWidget(label_2, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/img/img/notiimg3.png);"));

        gridLayout_3->addWidget(label_3, 1, 4, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 2);

        label_info = new QLabel(Uslugi_odpowiedz);
        label_info->setObjectName(QStringLiteral("label_info"));

        gridLayout_2->addWidget(label_info, 1, 0, 1, 1);


        retranslateUi(Uslugi_odpowiedz);

        QMetaObject::connectSlotsByName(Uslugi_odpowiedz);
    } // setupUi

    void retranslateUi(QDialog *Uslugi_odpowiedz)
    {
        Uslugi_odpowiedz->setWindowTitle(QApplication::translate("Uslugi_odpowiedz", "Dialog", 0));
        pushButton->setText(QApplication::translate("Uslugi_odpowiedz", "Wyslij", 0));
        pushButton_2->setText(QApplication::translate("Uslugi_odpowiedz", "Anuluj", 0));
        groupBox->setTitle(QApplication::translate("Uslugi_odpowiedz", "Wiadomo\305\233\304\207", 0));
        textEdit->setPlaceholderText(QApplication::translate("Uslugi_odpowiedz", "Tre\305\233\304\207 wiadomo\305\233ci ", 0));
        groupBox_2->setTitle(QApplication::translate("Uslugi_odpowiedz", "Ikona", 0));
        radioButton->setText(QString());
        label->setText(QString());
        radioButton_2->setText(QString());
        radioButton_4->setText(QString());
        radioButton_3->setText(QString());
        label_4->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_info->setText(QApplication::translate("Uslugi_odpowiedz", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Uslugi_odpowiedz: public Ui_Uslugi_odpowiedz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USLUGI_ODPOWIEDZ_H
