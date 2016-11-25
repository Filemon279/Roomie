#include "hotel_menu.h"
#include "ui_hotel_menu.h"


Hotel_menu::Hotel_menu(QWidget *parent,QString Info_ID) :
    QDialog(parent),
    ui(new Ui::Hotel_menu)
{
    ui->setupUi(this);

    Pokoje = new  Hotel_pokoje(this);
    Pokoje->setModal(true);
    server = new Hotel_server(this);
    connect(server,SIGNAL(sendLogs(QString)), Pokoje,SLOT(receiveLogs(QString)));
    connect(server,SIGNAL(sendUser(QString)), Pokoje,SLOT(receiveUser(QString)));
    connect(server,SIGNAL(passButtonNext(QStringList,int)), this,SLOT(createButton(QStringList,int)));

    server->startServer();
    layout_requests = new FlowLayout(5,10,10);

    ui->widget_requests->setLayout(layout_requests);

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



}

Hotel_menu::~Hotel_menu()
{
    delete ui;
}

void Hotel_menu::createButton(QStringList msg,int socket){

/*QString polecenie="INSERT INTO uslugi(Numer,Info_ID,Info) VALUES (";
polecenie.append(QString::number(socket)+",\"");
polecenie.append(msg.value(0)+"\",\"");
QString koniec = msg.value(1);
koniec.chop(1);
polecenie.append(koniec+"\")");
qDebug(polecenie.toUtf8());
QSqlQuery query(polecenie);*/
//nowePolecenie(socket,msg.value(0));
qDebug("poszło");
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
int i=1;

void Hotel_menu::on_pushButton_clicked()
{
//QSqlQuery query("INSERT INTO uslugi(Numer,Info_ID,Info,Data) VALUES (10,\"CLEAN\",\"Posprzarac caly pokoj\",\"15:45\")");
/*nowePolecenie(i,"FOOD");
i++;
nowePolecenie(i,"DRIVE");
i++;
nowePolecenie(i,"CONTACT");
i++;
nowePolecenie(i,"CLEAN");
i++;
nowePolecenie(i,"HELP");
i++;
nowePolecenie(i,"REPAIR");
i++;
nowePolecenie(i,"ROOM");
i++;*/

}

void Hotel_menu::nowePolecenie(int numer,QString Info_ID="")
{
    Hotel_button *b=new Hotel_button(this,Info_ID);
    b->setGeometry(0,0,100,100);
    b->setFixedHeight(200);
    b->setFixedWidth(200);
    b->setText(QString::number(numer).rightJustified(3,'0'));
    connect(b, SIGNAL (send_name(QString,QPushButton*)),this, SLOT (handleButton(QString,QPushButton*)));
    layout_requests->addWidget(b);
}


void Hotel_menu::nowePolecenie2(int numer,QString Info_ID)
{
    Hotel_button *b=new Hotel_button(this,Info_ID);
    b->setGeometry(0,0,100,100);
    b->setFixedHeight(200);
    b->setFixedWidth(200);
    b->setText(QString::number(numer).rightJustified(3,'0'));
    connect(b, SIGNAL (send_name(QString,QPushButton*)),this, SLOT (handleButton(QString,QPushButton*)));
    layout_requests->addWidget(b);
}

void Hotel_menu::handleButton(QString name,QPushButton *b)
{

    Info = new Uslugi_info(this,b);
    Info->setModal(true);
    Info->show();
    connect(this, SIGNAL (sendNumber(int)),Info, SLOT (getNumber(int)));
    emit sendNumber(name.toInt());
    Info->exec();
}
