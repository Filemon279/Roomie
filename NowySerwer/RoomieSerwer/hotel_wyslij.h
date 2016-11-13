#ifndef HOTEL_WYSLIJ_H
#define HOTEL_WYSLIJ_H

#include <QDialog>
#include <QTcpSocket>
#include "hotel_server.h"

namespace Ui {
class Hotel_wyslij;
}

class Hotel_wyslij : public QDialog
{
    Q_OBJECT

public:
    explicit Hotel_wyslij(QWidget *parent = 0);
    ~Hotel_wyslij();


private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Hotel_wyslij *ui;
    void odswiezBaze();
};

#endif // HOTEL_WYSLIJ_H
