#include "hotel_ustawienia.h"
#include "ui_hotel_ustawienia.h"


Hotel_ustawienia::Hotel_ustawienia(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Hotel_ustawienia)

{
    Pokoje room;
    room.checkIN="11-11-2011";
    pokoje.push_back(room);
    room.checkIN="11-12-2011";
    pokoje.push_back(room);
   // room = new Pokoje(24,"121","Imie","Naz","23-02-1995","02-02-1996");
//    pokoje.insert(it,room);
    ui->setupUi(this);
    // Make a server and starts it
    server = new Hotel_server(this);
    connect(server,SIGNAL(sendLogs(QString)), this,SLOT(receiveLogs(QString)));
    connect(server,SIGNAL(sendUser(QString)), this,SLOT(receiveUser(QString)));
    server->startServer();

 // for (std::list<Pokoje>::iterator i = pokoje.begin(); i != pokoje.end(); ++i)
  //    ui->textEdit->append(i->checkIN);
  //DEKLARACJA BAZY


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

odswiezBaze();

}

Hotel_ustawienia::~Hotel_ustawienia()
{

    delete ui;
}

void Hotel_ustawienia::receiveLogs(QString text)
{
ui->textEdit->append(text);
}

void Hotel_ustawienia::receiveUser(QString text)
{

}


void Hotel_ustawienia::odswiezBaze()
{
    int Rows;
    int Columns;
    QSqlQuery query("SELECT * FROM pokoje");


      ui->Table_pokoje->setColumnCount(Rows=query.record().count()); // pomijamy ID, indeksuje nam iterator
      ui->Table_pokoje->setRowCount(Columns=query.size());

      int index=0 ;
      for(int i=0; i<=Rows;i++)
      {
         QString nazwa = query.record().fieldName(i);
         QTableWidgetItem *newItem = new QTableWidgetItem(nazwa);
         ui->Table_pokoje->setHorizontalHeaderItem(i, newItem);     // naglowki
      }

      while (query.next())
      {
          for(int i=0; i<=Rows-1;i++)
          {
              ui->Table_pokoje->setItem(index,i,new QTableWidgetItem(query.value(i).toString()));
          }
              ui->Table_pokoje->setVerticalHeaderItem(index,new QTableWidgetItem(query.value("Numer").toString()));     //nr ID
      index++;
      }

 ui->Table_pokoje->show();
     ui->Table_pokoje->resizeColumnsToContents();
}


