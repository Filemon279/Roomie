#include "uslugi_info.h"
#include "ui_uslugi_info.h"

Uslugi_info::Uslugi_info(QWidget *parent,Hotel_button *b) :
    QDialog(parent),
    ui(new Ui::Uslugi_info)
{
    bb=b;
    ui->setupUi(this);

}

Uslugi_info::~Uslugi_info()
{
    delete ui;
}


Uslugi_info::getNumber(int number)
{

ui->label_numer->setText(QString::number(number).rightJustified(3,'0'));

nr = number;
/////////////////////
initBaza();


  if (!Baza.isOpen()) {
      if(!Baza.open())
      {
      ui->label_info->setText("Błąd połączenia: \n"+Baza.lastError().text());
      ui->label_info->setStyleSheet("color:red;");
      }
      else
      {
           ui->label_info->setText("Połączono");
           ui->label_info->setStyleSheet("color:green;");
      }
  }
  else
  {
       ui->label_info->setText("Połączono");
       ui->label_info->setStyleSheet("color:green;");
  }
/////////////////////

QString polecenie = "SELECT Imie, Nazwisko FROM pokoje WHERE Numer=";
polecenie.append(QString::number(number));
QSqlQuery query(polecenie);
query.next();
ui->label_imie->setText(query.value("Imie").toString());
ui->label_nazwisko->setText(query.value("Nazwisko").toString());

polecenie = "SELECT Info, Data FROM uslugi WHERE Numer=";
polecenie.append(QString::number(number)+" AND Info_ID=\"");
polecenie.append(bb->getInfo_ID()+"\"");
query.exec(polecenie);
query.next();
ui->textEdit->setText(query.value("Info").toString());
}

void Uslugi_info::on_pushButton_usun_clicked()
{
QString polecenie = "DELETE FROM uslugi WHERE Numer=";
polecenie.append(QString::number(nr)+" AND Info_ID=\"");
polecenie.append(bb->getInfo_ID()+"\"");
qDebug(polecenie.toUtf8());
    QSqlQuery query(polecenie);

bb->ExplodeInGreatStyle();
delete this;
}

void Uslugi_info::on_pushButton_close_clicked()
{

    delete this;
}

void Uslugi_info::on_pushButton_wyslij_odp_clicked()
{
    Odp = new Uslugi_odpowiedz(this,nr);
    Odp->setModal(true);
    Odp->show();
    Odp->exec();
}
