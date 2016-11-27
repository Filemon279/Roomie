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
    connect(server,SIGNAL(passButtonNext(QString,int)), this,SLOT(createButton(QString,int)));

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

loadButtons();

//
   minimizeAction = new QAction(tr("Ukryj"),this);
   connect(minimizeAction, SIGNAL(triggered()), this, SLOT(hide()));

   maximizeAction = new QAction(tr("FullScreen"),this);
   connect(maximizeAction,SIGNAL(triggered()),this,SLOT(show()));

   quitAction = new QAction(tr("Zamknij"),this);
   connect(quitAction,SIGNAL(triggered()),qApp,SLOT(quit()));

   trayIconMenu = new QMenu(this);
   trayIconMenu->addAction(minimizeAction);
   trayIconMenu->addAction(maximizeAction);
   trayIconMenu->addSeparator();
   trayIconMenu->addAction(quitAction);


QIcon *icon = new QIcon(":/img/img/warning_icon.png");
trayIcon = new QSystemTrayIcon(this);
connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
        this,SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
connect(trayIcon,SIGNAL(messageClicked()),this,SLOT(messageClicked()));
trayIcon->setContextMenu(trayIconMenu);
trayIcon->setIcon(*icon);
trayIcon->show();



}

void Hotel_menu::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason)
    {
    case QSystemTrayIcon::DoubleClick:
        this->show();
        break;
    case QSystemTrayIcon::MiddleClick:
        this->showMinimized();
        break;
    default:
        ;
    }
}

void Hotel_menu::showMessage(QString title,QString message)
{
    if(this->isHidden())trayIcon->showMessage(title,message);
}

void Hotel_menu::messageClicked()
{

  this->show();
  // layout_requests->invalidate();
  layout_requests->update();
}

Hotel_menu::~Hotel_menu()
{
    delete ui;
}

void Hotel_menu::createButton(QString msg,int socket){
nowePolecenie(socket,msg);
}

void Hotel_menu::keyPressEvent(QKeyEvent *e) {
    if(e->key() == Qt::Key_Escape){
    // message_box("Minimalizuj","Aplikacja zostanie zminimalizowana. Zamknij ją przez pasek MENU",this);

       this->hide();
    showMessage("Roomie wciąż działa","Aplikacja została zminimalizowana do paska zadań");
    }
    else {/* minimize */}
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
/*QSqlQuery query("INSERT INTO uslugi(Numer,Info_ID,Info,Data) VALUES (10,\"CLEAN\",\"Posprzarac caly pokoj\",\"15:45\")");
nowePolecenie(i,"FOOD");
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
    if(numer<0)
    {
        if(this->isHidden())
        {
        QString title = "Pokój nr: ";
        title.append(QString::number(-1*numer));
        QString msg = "Aktualizacja prośby o ID: #";
        msg.append(Info_ID);
        showMessage(title,msg);
        }
    }
   else{
    Hotel_button *b=new Hotel_button(this,Info_ID);
    b->setGeometry(0,0,100,100);
    b->setFixedHeight(200);
    b->setFixedWidth(200);
    b->setText(QString::number(numer).rightJustified(3,'0'));
    connect(b, SIGNAL (send_name(QString,Hotel_button*)),this, SLOT (handleButton(QString,Hotel_button*)));
    connect(b, SIGNAL (removeOUT(Hotel_button*)),this, SLOT (remove_IN(Hotel_button*)));
    layout_requests->addWidget(b);

       if(this->isHidden())
        {
        QString title = "Pokój nr: ";
        title.append(QString::number(numer));
        QString msg = "Nowa prośba o ID: #";
        msg.append(Info_ID);
        showMessage(title,msg);
        }
    }
}


void Hotel_menu::nowePolecenie2(int numer,QString Info_ID)
{
    Hotel_button *b=new Hotel_button(this,Info_ID);
    b->setGeometry(0,0,100,100);
    b->setFixedHeight(200);
    b->setFixedWidth(200);
    b->setText(QString::number(numer).rightJustified(3,'0'));
    connect(b, SIGNAL (send_name(QString,Hotel_button*)),this, SLOT (handleButton(QString,Hotel_button*)));
    connect(b, SIGNAL (removeOUT(Hotel_button*)),this, SLOT (remove_IN(Hotel_button*)));
    layout_requests->addWidget(b);
}

void Hotel_menu::remove_IN(Hotel_button *b)
{
    qDebug("ss");
    layout_requests->removeWidget(b);
    b->close();

}


void Hotel_menu::handleButton(QString name,Hotel_button *b)
{

    Info = new Uslugi_info(this,b);
    Info->setModal(true);
    Info->show();
    connect(this, SIGNAL (sendNumber(int)),Info, SLOT (getNumber(int)));
    emit sendNumber(name.toInt());
    Info->exec();
}

void Hotel_menu::loadButtons()
{
    QString polecenie = "SELECT * FROM uslugi";
    QSqlQuery query(polecenie);
    while(query.next())
    {
       nowePolecenie2(query.value("Numer").toInt(),query.value("Info_ID").toString());
    }
}
