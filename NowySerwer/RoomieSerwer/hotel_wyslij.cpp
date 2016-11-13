#include "hotel_wyslij.h"
#include "ui_hotel_wyslij.h"

Hotel_wyslij::Hotel_wyslij(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hotel_wyslij)
{
    ui->setupUi(this);
    ui->Table_pokoje->horizontalHeader()->setStretchLastSection(true);
    ui->Table_pokoje->verticalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Table_pokoje->horizontalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Table_pokoje->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->Table_pokoje->setSelectionBehavior(QAbstractItemView::SelectRows);


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

Hotel_wyslij::~Hotel_wyslij()
{
    delete ui;
}




void Hotel_wyslij::odswiezBaze()
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
          if(query.value("status")!="")//&&query.value("status")!="0"
          {
          for(int i=0; i<=Rows-1;i++)
          {

               ui->Table_pokoje->setItem(index,i,new QTableWidgetItem(query.value(i).toString()));

           }
          ui->Table_pokoje->setVerticalHeaderItem(index,new QTableWidgetItem(query.value("Numer").toString()));     //nr ID
          index++;
          }

      }
ui->Table_pokoje->setRowCount(index);
 ui->Table_pokoje->show();
     ui->Table_pokoje->resizeColumnsToContents();
}

void Hotel_wyslij::on_pushButton_2_clicked()
{
    if(ui->Table_pokoje->selectedItems().length()>0)
    {
        QTcpSocket *socket = new QTcpSocket();
        QString socket_number = ui->Table_pokoje->item(ui->Table_pokoje->currentRow(),ui->Table_pokoje->columnCount()-1)->text();
        if(!socket->setSocketDescriptor(socket_number.toInt()))
        {
        message_box("Błąd połączenia","Brak połączenia z użytkownikiem.Brak połączenia z użytkownikiem.Brak połączenia z użytkownikiem.",this);

        }
        else
        {
        QByteArray wiadomosc="POW#";
        wiadomosc.append(ui->lineEdit_title->text()+"#");
        wiadomosc.append(ui->textEdit_msg->toPlainText()+"\n");
        socket->write(wiadomosc);
        socket->flush();
        }
    }
}
