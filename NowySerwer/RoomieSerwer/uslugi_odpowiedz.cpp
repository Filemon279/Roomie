#include "uslugi_odpowiedz.h"
#include "ui_uslugi_odpowiedz.h"


Uslugi_odpowiedz::Uslugi_odpowiedz(QWidget *parent,int number) :
    QDialog(parent),
    ui(new Ui::Uslugi_odpowiedz)
{
    ui->setupUi(this);
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
}

Uslugi_odpowiedz::~Uslugi_odpowiedz()
{
    delete ui;
}

void Uslugi_odpowiedz::on_pushButton_2_clicked()
{
    delete this;
}

void Uslugi_odpowiedz::on_pushButton_clicked()
{

    QString polecenie = "SELECT status FROM pokoje WHERE Numer=";
    polecenie.append(QString::number(nr));
    QSqlQuery query(polecenie);
    query.next();

    QTcpSocket *socket = new QTcpSocket();
    int socket_number = query.value("status").toInt();

    if(!socket->setSocketDescriptor(socket_number))
    {
    ui->textEdit->setText("Wystąpił błąd, proszę spróbować póxniej");
    return;
    }
    else
    {
    QByteArray wiadomosc="POW#";
    wiadomosc.append("Odpowiedź na prośbę#");
    wiadomosc.append(ui->textEdit->toPlainText()+"\n");
    socket->write(wiadomosc);
    socket->flush();
    delete this;
    }
}
