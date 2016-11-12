#ifndef HOTEL_USTAWIENIA_H
#define HOTEL_USTAWIENIA_H

#include <QDialog>

namespace Ui {
class Hotel_ustawienia;
}

class Hotel_ustawienia : public QDialog
{
    Q_OBJECT

public:
    explicit Hotel_ustawienia(QWidget *parent = 0);
    ~Hotel_ustawienia();

private:
    Ui::Hotel_ustawienia *ui;
};

#endif // HOTEL_USTAWIENIA_H
