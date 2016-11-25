#include "hotel_button.h"

Hotel_button::Hotel_button(QWidget *parent,QString Info_ID) : QPushButton(parent)
{
    Info_ID_OUT=Info_ID;
 this->setStyleSheet("QPushButton:hover{background-color:"
                     "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(214, 137, 0, 255), stop:1 rgba(255, 234, 97, 255))}"
                     "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
                     "qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(255, 164, 0, 255), stop:1 rgba(255, 255, 169, 255))}");


    if(Info_ID=="HELP"){//////HELP - Info o pomocy
   this->setStyleSheet("QPushButton:hover{background-color:"
                     "#ff3333}"
                     "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
                     "#cc0000}");}
    ////////CLEAN - Sprzatanie
    else if(Info_ID=="CLEAN"){
    this->setStyleSheet("QPushButton:hover{background-color:"
    "#33cc00}"
    "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
    "#2db300}");}

    ////////REPAIR - Naprawa sprzetu
    else if(Info_ID=="REPAIR"){
     this->setStyleSheet("QPushButton:hover{background-color:"
    "#ffa31a}"
    "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
    "#e68a00}");}

    ////////ROOM - Uzupelnienie zapasow
    else if(Info_ID=="ROOM"){
    this->setStyleSheet("QPushButton:hover{background-color:"
    "#1a8cff}"
    "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
    "#0066cc}");}

    ////////CONTACT - Prosba o kontakt
    else if(Info_ID=="CONTACT"){
    this->setStyleSheet("QPushButton:hover{background-color:"
    "#1affb2}"
    "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
    "#00e699}");}

    ////////DRIVE - Prosba o transport
    else if(Info_ID=="DRIVE"){
     this->setStyleSheet("QPushButton:hover{background-color:"
    "#1a53ff}"
    "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
    "#002db3}");}

    ////////FOOD - Prosba o jedzonko
    else if(Info_ID=="FOOD"){
    this->setStyleSheet("QPushButton:hover{background-color:"
    "#ffff00}"
    "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
    "#e6e600}");}
    else{
        this->setStyleSheet("QPushButton:hover{background-color:"
                          "#ff3333}"
                          "QPushButton{color:white;font-weight:bold;font-size:25px;background-color: "
                          "#cc0000}");
    }


}


void Hotel_button::mousePressEvent(QMouseEvent *e)
{

    if(e->button()==Qt::LeftButton) emit send_name(this->text(),this);

}

QString Hotel_button::getInfo_ID()
{
    return Info_ID_OUT;
}


