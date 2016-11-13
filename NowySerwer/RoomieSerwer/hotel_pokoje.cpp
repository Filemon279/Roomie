#include "hotel_pokoje.h"
#include "ui_hotel_pokoje.h"

Hotel_pokoje::Hotel_pokoje(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hotel_pokoje)
{
    ui->setupUi(this);

    ui->Table_pokoje->horizontalHeader()->setStretchLastSection(true);
    ui->Table_pokoje->verticalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Table_pokoje->horizontalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Table_pokoje->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->Table_pokoje->setSelectionBehavior(QAbstractItemView::SelectRows);




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

Hotel_pokoje::~Hotel_pokoje()
{
    delete ui;
}

void Hotel_pokoje::keyPressEvent(QKeyEvent *e) {
    if(e->key() == Qt::Key_Escape)
        this->hide();
    else {/* minimize */}
}


void Hotel_pokoje::receiveLogs(QString text)
{
ui->textEdit->append(text);
}

void Hotel_pokoje::receiveUser(QString text)
{

}


void Hotel_pokoje::odswiezBaze()
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



void Hotel_pokoje::deleteRecord()
{
    int row = ui->Table_pokoje->currentRow();

    QString polecenie;
    polecenie = "DELETE FROM pokoje WHERE Numer=";
    polecenie.append(ui->Table_pokoje->verticalHeaderItem(row)->text());
         QSqlQuery query(polecenie);
          ui->Table_pokoje->removeRow(row);
}

void Hotel_pokoje::addRecord()
{
    QSqlQuery query("INSERT INTO pokoje() VALUES ()");
    //ODSWIEZAMY
          odswiezBaze();
}


void Hotel_pokoje::zapiszBaze()
{
    //ZAPISYWANIE
    int wiersze = ui->Table_pokoje->rowCount();
    int kolumny = ui->Table_pokoje->columnCount();

    QString polecenie;

      for(int w=0;w<wiersze;w++)
    {
         polecenie="UPDATE pokoje SET ";
       for(int k=0;k<kolumny;k++)
        {
            polecenie.append(" ");
            polecenie.append(ui->Table_pokoje->horizontalHeaderItem(k)->text());
            polecenie.append(" = \"");
            polecenie.append(ui->Table_pokoje->item(w,k)->text());
            polecenie.append("\",");
        }
       polecenie.chop(1);                   //usuwa ostatni znak w stringu
        polecenie.append(" WHERE Numer = ");
        polecenie.append(ui->Table_pokoje->verticalHeaderItem(w)->text());
        ui->textEdit->append(polecenie);

 QSqlQuery query(polecenie);
    }



}




void Hotel_pokoje::on_pushButton_3_clicked()
{
    addRecord();
}

void Hotel_pokoje::on_pushButton_2_clicked()
{
    odswiezBaze();
}

void Hotel_pokoje::on_pushButton_clicked()
{
    zapiszBaze();
}
