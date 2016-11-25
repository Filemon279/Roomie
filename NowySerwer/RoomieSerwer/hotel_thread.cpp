#include "hotel_thread.h"

Hotel_thread::Hotel_thread(qintptr ID, QObject *parent) :
    QThread(parent)
{
    this->socketDescriptor = ID;
}


void Hotel_thread::run()
{
    // thread starts here
    sendLogs("Thread started");
    initBaza();
    socket = new QTcpSocket();

    // set the ID
    if(!socket->setSocketDescriptor(this->socketDescriptor))
    {
        // something's wrong, we just emit a signal
        emit error(socket->error());
        return;
    }

    // connect socket and signal
    // note - Qt::DirectConnection is used because it's multithreaded
    //        This makes the slot to be invoked immediately, when the signal is emitted.

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));

    // We'll have multiple clients, we want to know which is which
    sendLogs(QString::number(socketDescriptor)+" Client connected");
    //emit sendThreadUser(QString::number(socketDescriptor)+" - ");

    // make this thread a loop,
    // thread will stay alive so that signal/slot to function properly
    // not dropped out in the middle when thread dies

    exec();
}

void Hotel_thread::readyRead()
{
    // get the information
    QByteArray Data = socket->readAll();

    // will write on server side window
    sendLogs(QString::number(socketDescriptor)+" Data in: "+Data);

    QStringList msg = QString(Data).split("#");

    if(msg.length()>0)
    {

    if (!Baza.isOpen())
    {
        if(!Baza.open())
        {
        sendLogs("NIE POLACZONO");
        }
        else
        {
        sendLogs("POLACZONO");
        }
    }
    else
    {
       sendLogs("POLACZONO");
    }


     if(msg.value(0)=="REPAIR"){
         QString polecenie = "SELECT * FROM pokoje WHERE status=\"";
         polecenie.append(QString::number(socketDescriptor)+"\"");
         QSqlQuery query(polecenie);
         sendLogs(polecenie);

         if(query.next())
         {
             QString polecenie="INSERT INTO uslugi(Numer,Info_ID,Info) VALUES (";
             polecenie.append(query.value("Numer").toString()+",\"");
             polecenie.append(msg.value(0)+"\",\"");
             QString koniec = msg.value(1);
             koniec.chop(1);
             polecenie.append(koniec+"\")");
             qDebug(polecenie.toUtf8());
             query.exec(polecenie);
             emit createButton(msg,1);
         }

     }


    else if(msg.value(0)=="LOGREQ"){
        //Sprawdzamy gdzie i kto chce sie zalogować
        //I czy pokoj jest zarejestrowany
        QString polecenie = "SELECT * FROM pokoje WHERE Numer=";
        polecenie.append(msg.value(1));//+" AND Haslo=\"");
        //polecenie.append(msg.value(2));
       // polecenie.chop(1);
        //polecenie.append("\"");
        QSqlQuery query(polecenie);
        sendLogs(polecenie);

        if(query.next())
        {
            QString pass = msg.value(2);
            pass.chop(1);
            if(query.value("Haslo")==pass)
            {   //UPDATE `pokoje` SET `Numer`=[value-1] WHERE 1
                polecenie = "UPDATE `pokoje` SET `status`=\"";
                polecenie.append(QString::number(socketDescriptor)+"\" WHERE Numer=");
                polecenie.append(msg.value(1));
                QSqlQuery query(polecenie);
                numer_pokoju = msg.value(1);
                sendLogs("Wysylam: loginConfirmed");
                socket->write("loginConfirmed\n");
                socket->flush();
                sendLogs(QString::number(socketDescriptor)+" ZALOGOWANO Nr: "+msg.value(1));

                //Wysylam checkIN CHECK OUT
                //CHECKINOUT#zameldowanie/wymeldowanie
                polecenie = "SELECT checkIn, checkOut FROM pokoje WHERE Numer=";
                polecenie.append(msg.value(1));
                query.exec(polecenie);
                query.next();
                QByteArray msg1 = "CHECKINOUT#";
                msg1.append(query.value("checkIn").toString()+"#");
                msg1.append(query.value("checkOut").toString()+"\n");
                sendLogs(QString::number(socketDescriptor)+" Wysylam "+msg1);

                socket->write(msg1);
                socket->flush();
            }
            else
            {
                sendLogs("NIE ZALOGOWANO - Bledne haslo - Nr: "+msg.value(1));
                socket->write("passwordWrong\n");
                socket->flush();
            }
        }
        else // BRAK KONTA O TYM NUMERZE
        {

            sendLogs("NIE ZALOGOWANO - Bledny numer - Nr: "+msg.value(1));
            socket->write("noAccount\n");
            socket->flush();
          // QString polecenie = "SELECT * FROM pokoje WHERE Numer=";
          //  polecenie.append(msg.value(1));
          //  if()
        }


    }

    }
}

void Hotel_thread::disconnected()
{
     sendLogs(QString::number(socketDescriptor)+" Disconnected");
    QString polecenie;
     polecenie = "UPDATE `pokoje` SET `status`=\"0\" WHERE Numer=";
     polecenie.append(numer_pokoju);
     QSqlQuery query(polecenie);

    socket->deleteLater();
    exit(0);
}

void Hotel_thread::sendLogs(QString text)
{
emit  sendThreadLogs(text);
}
