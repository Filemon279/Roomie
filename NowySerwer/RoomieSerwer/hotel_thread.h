#ifndef HOTEL_THREAD_H
#define HOTEL_THREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include "hotel_server.h"

class Hotel_thread : public QThread
{
    Q_OBJECT
public:
     explicit  Hotel_thread(qintptr ID, QObject *parent = 0);
       void run();
signals:
    void error(QTcpSocket::SocketError socketerror);
    void sendThreadLogs(QString);
    void sendThreadUser(QString);

public slots:
    void readyRead();
    void disconnected();

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
    void sendLogs(QString text);
    QString numer_pokoju = "brak";
};












#endif // HOTEL_THREAD_H
