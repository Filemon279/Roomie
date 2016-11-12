#include "hotel_ustawienia.h"
#include "ui_hotel_ustawienia.h"

Hotel_ustawienia::Hotel_ustawienia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hotel_ustawienia)
{
    ui->setupUi(this);
}

Hotel_ustawienia::~Hotel_ustawienia()
{
    delete ui;
}
