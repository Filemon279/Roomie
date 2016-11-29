#include "hotel_zamelduj.h"
#include "ui_hotel_zamelduj.h"

Hotel_zamelduj::Hotel_zamelduj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hotel_zamelduj)
{
    ui->setupUi(this);

}

Hotel_zamelduj::~Hotel_zamelduj()
{
    delete ui;
    initBaza();

}



void Hotel_zamelduj::on_pushButton_dodaj_clicked()
{

    //Sprawdzamy NUMER POKOJU, Tylko CYFRY.
    if(ui->lineEdit_nrPokoju->text()=="")
    {
        message_box("BŁĄD","Proszę podać numer pokoju",this);
        return;
    }

    //Jedynie do ogarniecia czy "sprasuje" nam numer do inta.
    bool ok;
    int numer = ui->lineEdit_nrPokoju->text().toInt(&ok);
    if(!ok)
    {
        message_box("BŁĄD","Proszę podać poprawny numer pokoju<br>(Tylko cyfry)",this);
        return;
    }


    //Sprawdzamy HASŁO, min 3 znaki
    if(ui->lineEdit_haslo->text().length()<2)
    {
        message_box("BŁĄD","Proszę podać hasło<br>(min. 3 znaki)",this);
        return;
    }

    //Pokoj nie moze sie duplikowac
    if(sprawdzCzyWolny(ui->lineEdit_nrPokoju->text()))
    {
        message_box("BŁĄD","Ten pokój jest już zajęty",this);
       return;
    }

    //Tutaj dojdziemy jedynie gdy nic nas wczesniej nie zatrzyma

    /**
      *Tak przedstawia sie struktura BAZY na dzien 11/13/2016
      *
      *INSERT INTO `pokoje`(`Numer`, `Haslo`, `Imie`, `Nazwisko`, `checkIn`, `checkOut`, `inne`)
      *VALUES ([value-1],[value-2],[value-3],[value-4],[value-5],[value-6],[value-7])
      */

     QString polecenie="INSERT INTO `pokoje`(`Numer`, `Haslo`, `Imie`, `Nazwisko`, `checkIn`, `checkOut`, `inne`) VALUES(";
    polecenie.append(ui->lineEdit_nrPokoju->text()+",");
    polecenie.append("\""+ui->lineEdit_haslo->text()+"\",");
    polecenie.append("\""+ui->lineEdit_imie->text()+"\",");
    polecenie.append("\""+ui->lineEdit_nazwisko->text()+"\",");
    polecenie.append("\""+ui->calendar_checkIN->selectedDate().toString("yyyy-MM-dd")+"\",");
    polecenie.append("\""+ui->calendar_checkOUT->selectedDate().toString("yyyy-MM-dd")+"\",");
    polecenie.append("\""+ui->lineEdit_inne->text()+"\")");
    QSqlQuery query(polecenie);
    delete this;

}


bool Hotel_zamelduj::sprawdzCzyWolny(QString numer)
{
  QString polecenie="SELECT * FROM pokoje WHERE Numer=";
  polecenie.append(numer);
  QSqlQuery query(polecenie);
  if(query.next()) return 1;
  else return 0;
}
