#ifndef HOTEL_POKOJE_H
#define HOTEL_POKOJE_H

#include <QDialog>
#include "hotel_server.h"
#include <QKeyEvent>

namespace Ui {
class Hotel_pokoje;
}

class Hotel_pokoje : public QDialog
{
    Q_OBJECT

public:
    explicit Hotel_pokoje(QWidget *parent = 0);
    ~Hotel_pokoje();
     Hotel_server *server;

private:
    Ui::Hotel_pokoje *ui;
     void odswiezBaze();
     void zapiszBaze();
     void addRecord();
     void deleteRecord();
private slots:
    void receiveLogs(QString text);
    void receiveUser(QString text);
    void keyPressEvent(QKeyEvent *e);
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};













#endif // HOTEL_POKOJE_H
