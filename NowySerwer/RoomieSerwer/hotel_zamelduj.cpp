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
    //INSERT INTO `pokoje`(`Numer`, `Haslo`, `Imie`, `Nazwisko`, `checkIn`, `checkOut`, `inne`)
    //VALUES ([value-1],[value-2],[value-3],[value-4],[value-5],[value-6],[value-7])
  QString polecenie="INSERT INTO `pokoje`(`Numer`, `Haslo`, `Imie`, `Nazwisko`, `checkIn`, `checkOut`, `inne`) VALUES(";
polecenie.append(ui->lineEdit_nrPokoju->text()+",");
polecenie.append("\""+ui->lineEdit_haslo->text()+"\",");
polecenie.append("\""+ui->lineEdit_imie->text()+"\",");
polecenie.append("\""+ui->lineEdit_nazwisko->text()+"\",");
polecenie.append("\""+ui->calendar_checkIN->selectedDate().toString("yyyy-MM-dd")+"\",");
polecenie.append("\""+ui->calendar_checkOUT->selectedDate().toString("yyyy-MM-dd")+"\",");
polecenie.append("\""+ui->lineEdit_inne->text()+"\")");
ui->lineEdit_haslo->setText(polecenie);
  QSqlQuery query(polecenie);
}
