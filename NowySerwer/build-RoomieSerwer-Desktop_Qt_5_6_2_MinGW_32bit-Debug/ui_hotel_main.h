/********************************************************************************
** Form generated from reading UI file 'hotel_main.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTEL_MAIN_H
#define UI_HOTEL_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hotel_main
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *Table_pokoje;
    QLabel *label_info;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;

    void setupUi(QMainWindow *Hotel_main)
    {
        if (Hotel_main->objectName().isEmpty())
            Hotel_main->setObjectName(QStringLiteral("Hotel_main"));
        Hotel_main->resize(934, 505);
        centralWidget = new QWidget(Hotel_main);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(934, 505));
        centralWidget->setLayoutDirection(Qt::LeftToRight);
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        Table_pokoje = new QTableWidget(centralWidget);
        Table_pokoje->setObjectName(QStringLiteral("Table_pokoje"));

        verticalLayout->addWidget(Table_pokoje);

        label_info = new QLabel(centralWidget);
        label_info->setObjectName(QStringLiteral("label_info"));

        verticalLayout->addWidget(label_info);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(horizontalLayout_2);

        Hotel_main->setCentralWidget(centralWidget);

        retranslateUi(Hotel_main);

        QMetaObject::connectSlotsByName(Hotel_main);
    } // setupUi

    void retranslateUi(QMainWindow *Hotel_main)
    {
        Hotel_main->setWindowTitle(QApplication::translate("Hotel_main", "Hotel_main", 0));
        label_info->setText(QApplication::translate("Hotel_main", "TextLabel", 0));
        pushButton->setText(QApplication::translate("Hotel_main", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class Hotel_main: public Ui_Hotel_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTEL_MAIN_H
