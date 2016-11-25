#include "hotel_server.h"
#include "hotel_server.h"
#include "hotel_thread.h"

Hotel_server::Hotel_server(QObject *parent) : QTcpServer(parent)
{

}


void Hotel_server::startServer()
{

initBaza();


    if (!Baza.isOpen()) {
        if(!Baza.open())
        {
        sendLog("Błąd połączenia: \n"+Baza.lastError().text());

        }
        else
        {
            sendLog("Połączono");
        }
    }
    else
    {
         sendLog("Połączono");
    }

    int port = 8080;

    if(!this->listen(QHostAddress::Any,port))
    {
      sendLog("Could not start server");
    }
    else
    {

       sendLog("Listening to port "+QString::number(port)+"...");
    }
}

void Hotel_server::incomingConnection(qintptr socketDescriptor)
{
    // We have a new connection
   sendLog(QString::number(socketDescriptor)+" Connecting...");

    Hotel_thread *thread = new Hotel_thread(socketDescriptor, this);

    // connect signal/slot
    // once a thread is not needed, it will be beleted later
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    connect(thread, SIGNAL(sendThreadLogs(QString)), this,SLOT(receiveLogs(QString)));
    connect(thread, SIGNAL(sendThreadUser(QString)), this,SLOT(receiveThreadUser(QString)));
    connect(thread, SIGNAL(createButton(QString,int)), this,SLOT(passButton(QString,int)));

    thread->start();
}

void Hotel_server::sendLog(QString text)
{
    emit sendLogs(text);
}

void Hotel_server::receiveThreadUser(QString text)
{
emit sendUser(text);
}


void Hotel_server::receiveLogs(QString text)
{
sendLog(text);
}

void Hotel_server::passButton(QString msg,int socket)
{
emit passButtonNext(msg,socket);
}

