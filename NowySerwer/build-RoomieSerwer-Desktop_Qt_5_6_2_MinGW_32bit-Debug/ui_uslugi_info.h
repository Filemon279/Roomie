/********************************************************************************
** Form generated from reading UI file 'uslugi_info.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USLUGI_INFO_H
#define UI_USLUGI_INFO_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Uslugi_info
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton_wyslij_odp;
    QLabel *label_nazwisko;
    QLabel *label_3;
    QLabel *label_imie;
    QLabel *label_numer;
    QLabel *label_4;
    QPushButton *pushButton_usun;
    QPushButton *pushButton_close;
    QLabel *label;
    QLabel *label_info;

    void setupUi(QDialog *Uslugi_info)
    {
        if (Uslugi_info->objectName().isEmpty())
            Uslugi_info->setObjectName(QStringLiteral("Uslugi_info"));
        Uslugi_info->resize(656, 422);
        Uslugi_info->setStyleSheet(QStringLiteral("#Uslugi_info{border-image: url(:/img/img/info_bg.jpeg);}"));
        gridLayout_2 = new QGridLayout(Uslugi_info);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(Uslugi_info);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 150);color:white"));
        textEdit->setReadOnly(true);

        verticalLayout->addWidget(textEdit);


        gridLayout_2->addWidget(groupBox, 2, 0, 1, 5);

        pushButton_wyslij_odp = new QPushButton(Uslugi_info);
        pushButton_wyslij_odp->setObjectName(QStringLiteral("pushButton_wyslij_odp"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_wyslij_odp->sizePolicy().hasHeightForWidth());
        pushButton_wyslij_odp->setSizePolicy(sizePolicy1);
        pushButton_wyslij_odp->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_wyslij_odp->setFont(font1);
        pushButton_wyslij_odp->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(29, 128, 189, 255), stop:1 rgba(46, 46, 46, 255)); color:white"));

        gridLayout_2->addWidget(pushButton_wyslij_odp, 3, 3, 1, 2);

        label_nazwisko = new QLabel(Uslugi_info);
        label_nazwisko->setObjectName(QStringLiteral("label_nazwisko"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_nazwisko->setFont(font2);

        gridLayout_2->addWidget(label_nazwisko, 1, 3, 1, 1);

        label_3 = new QLabel(Uslugi_info);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_imie = new QLabel(Uslugi_info);
        label_imie->setObjectName(QStringLiteral("label_imie"));
        label_imie->setFont(font2);

        gridLayout_2->addWidget(label_imie, 1, 1, 1, 1);

        label_numer = new QLabel(Uslugi_info);
        label_numer->setObjectName(QStringLiteral("label_numer"));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        label_numer->setFont(font4);

        gridLayout_2->addWidget(label_numer, 0, 4, 1, 1);

        label_4 = new QLabel(Uslugi_info);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);

        pushButton_usun = new QPushButton(Uslugi_info);
        pushButton_usun->setObjectName(QStringLiteral("pushButton_usun"));
        pushButton_usun->setMinimumSize(QSize(0, 50));
        pushButton_usun->setBaseSize(QSize(0, 50));
        pushButton_usun->setFont(font1);
        pushButton_usun->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(29, 128, 189, 255), stop:1 rgba(46, 46, 46, 255)); color:white"));

        gridLayout_2->addWidget(pushButton_usun, 3, 0, 1, 1);

        pushButton_close = new QPushButton(Uslugi_info);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setMinimumSize(QSize(0, 50));
        pushButton_close->setFont(font1);
        pushButton_close->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(29, 128, 189, 255), stop:1 rgba(46, 46, 46, 255)); color:white"));

        gridLayout_2->addWidget(pushButton_close, 3, 1, 1, 2);

        label = new QLabel(Uslugi_info);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font3);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 3);

        label_info = new QLabel(Uslugi_info);
        label_info->setObjectName(QStringLiteral("label_info"));

        gridLayout_2->addWidget(label_info, 0, 0, 1, 1);


        retranslateUi(Uslugi_info);

        QMetaObject::connectSlotsByName(Uslugi_info);
    } // setupUi

    void retranslateUi(QDialog *Uslugi_info)
    {
        Uslugi_info->setWindowTitle(QApplication::translate("Uslugi_info", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Uslugi_info", "Wiadomo\305\233\304\207", 0));
        textEdit->setPlaceholderText(QApplication::translate("Uslugi_info", "TEKST USLUGI", 0));
        pushButton_wyslij_odp->setText(QApplication::translate("Uslugi_info", "Wy\305\233lij Komunikat", 0));
        label_nazwisko->setText(QApplication::translate("Uslugi_info", "[Nazwisko]", 0));
        label_3->setText(QApplication::translate("Uslugi_info", "Imi\304\231: ", 0));
        label_imie->setText(QApplication::translate("Uslugi_info", "[Imie]", 0));
        label_numer->setText(QApplication::translate("Uslugi_info", "00x", 0));
        label_4->setText(QApplication::translate("Uslugi_info", "Nazwisko: ", 0));
        pushButton_usun->setText(QApplication::translate("Uslugi_info", "Usu\305\204", 0));
        pushButton_close->setText(QApplication::translate("Uslugi_info", "Zamknij", 0));
        label->setText(QApplication::translate("Uslugi_info", "Numer pokoju: ", 0));
        label_info->setText(QApplication::translate("Uslugi_info", "Status", 0));
    } // retranslateUi

};

namespace Ui {
    class Uslugi_info: public Ui_Uslugi_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USLUGI_INFO_H
