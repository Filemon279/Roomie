#ifndef HOTEL_SERVER_H
#define HOTEL_SERVER_H

#include <QTcpServer>
#include "hotel_thread.h"
#include "bazadanych.h"


class Hotel_server : public QTcpServer
{

    Q_OBJECT
public:
    explicit Hotel_server(QObject *parent = 0);
    void startServer();
private:
    void sendLog(QString text);

signals:
    void sendLogs(QString);
    void sendUser(QString);

private slots:
    void receiveLogs(QString text);
    void receiveThreadUser(QString text);

protected:
    void incomingConnection(qintptr socketDescriptor);



};

#endif // HOTEL_SERVER_H
