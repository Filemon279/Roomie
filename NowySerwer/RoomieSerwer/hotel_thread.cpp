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

    if(Data.contains("LOG")){
        sendLogs("Wysylam: loginConfirmed");
        socket->write("loginConfirmed\n");
       // socket->write(Data);
        socket->flush();
        socket->waitForBytesWritten(30000);
         sendLogs("Wysylam: wyslano");

    }
    else socket->write(Data);

}

void Hotel_thread::disconnected()
{
     sendLogs(QString::number(socketDescriptor)+" Disconnected");


    socket->deleteLater();
    exit(0);
}

void Hotel_thread::sendLogs(QString text)
{
emit  sendThreadLogs(text);
}
