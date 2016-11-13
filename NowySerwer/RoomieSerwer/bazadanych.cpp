#include "bazadanych.h"


QSqlDatabase Baza = QSqlDatabase::addDatabase("QMYSQL");


BazaDanych::BazaDanych()
{

}

extern void initBaza(){
    Baza.setHostName("127.0.0.1");
    Baza.setDatabaseName("roomie");
    Baza.setUserName("root");
    Baza.setPassword("root");
}


//Zaprojektowany ogolny messageBOX
extern int message_box(QString title, QString message, QWidget *widget)
{
    QMessageBox *msgBox = new QMessageBox(widget);
       msgBox->setText("<p style='font-size:15px'><b>"+title+"</p></b>");
       msgBox->setInformativeText("<p align='center' style='font-size:18px'>"+message+"</p>");
       msgBox->setDefaultButton(QMessageBox::Ok);
       QSpacerItem* horizontalSpacer = new QSpacerItem(350, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
       QGridLayout* layout = (QGridLayout*)msgBox->layout();
       layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
       msgBox->setStyleSheet("QMessageBox { background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255)); }");
       msgBox->setWindowFlags(Qt::FramelessWindowHint);
       return msgBox->exec();
}
