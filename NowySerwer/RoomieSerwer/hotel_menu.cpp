#include "hotel_menu.h"
#include "ui_hotel_menu.h"


Hotel_menu::Hotel_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hotel_menu)
{
    ui->setupUi(this);

    Pokoje = new  Hotel_pokoje(this);
    Pokoje->setModal(true);
    server = new Hotel_server(this);
     connect(server,SIGNAL(sendLogs(QString)), Pokoje,SLOT(receiveLogs(QString)));
     connect(server,SIGNAL(sendUser(QString)), Pokoje,SLOT(receiveUser(QString)));
     server->startServer();

}

Hotel_menu::~Hotel_menu()
{
    delete ui;
}


void Hotel_menu::on_pushButton_Ustawienia_clicked()
{
    Ustawienia = new  Hotel_ustawienia(this);
    Ustawienia->setModal(true);
    Ustawienia->showFullScreen();
    Ustawienia->exec();
}

void Hotel_menu::on_pushButton_Zarzadzaj_clicked()
{
Pokoje->showFullScreen();
}

void Hotel_menu::on_pushButton_Wymelduj_clicked()
{
    Wyslij = new  Hotel_wyslij(this);
    Wyslij->setModal(true);
    Wyslij->showFullScreen();
    Wyslij->exec();
}

void Hotel_menu::on_pushButton_Zamelduj_clicked()
{
    Zamelduj = new  Hotel_zamelduj(this);
    Zamelduj->setModal(true);
    Zamelduj->showFullScreen();
    Zamelduj->exec();
}
