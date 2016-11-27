
#ifndef HOTEL_MENU_H
#define HOTEL_MENU_H

#include <QDialog>
#include "hotel_ustawienia.h"
#include <QKeyEvent>
#include "hotel_pokoje.h"
#include "hotel_wyslij.h"
#include "hotel_zamelduj.h"
#include "hotel_server.h"
#include "flowlayout.h"
#include <QStringList>
#include "uslugi_info.h"
#include "hotel_button.h"
#include "QSystemTrayIcon"
#include "QIcon"
#include "QAction"
#include "QMenu"


namespace Ui {
class Hotel_menu;
}

class Hotel_menu : public QDialog
{
    Q_OBJECT

public:
    explicit Hotel_menu(QWidget *parent = 0);
    ~Hotel_menu();
    Hotel_server *server;
    void nowePolecenie2(int numer,QString Info_ID);
signals:
    sendNumber(int);


private slots:
    void keyPressEvent(QKeyEvent *e);
    void remove_IN(Hotel_button* b);

    void iconActivated(QSystemTrayIcon::ActivationReason reason);

    void on_pushButton_Ustawienia_clicked();

    void on_pushButton_Zarzadzaj_clicked();

    void on_pushButton_Wymelduj_clicked();

    void on_pushButton_Zamelduj_clicked();

    void on_pushButton_clicked();

    void createButton(QString msg,int socket);

    void handleButton(QString name,Hotel_button* b);
    void showMessage(QString title,QString message);
    void messageClicked();

private:
    Ui::Hotel_menu *ui;
    Hotel_ustawienia *Ustawienia;
    Hotel_pokoje *Pokoje;

    Uslugi_info *Info;
    Hotel_wyslij *Wyslij;
    Hotel_zamelduj *Zamelduj;
    FlowLayout *layout_requests ;
    void nowePolecenie(int numer,QString Info_ID);
    void loadButtons();
    QMenu *trayIconMenu;
    QSystemTrayIcon *trayIcon;
    QAction *minimizeAction;
    QAction *maximizeAction;
    QAction *ninjaAction;
    QAction *quitAction;

};


#endif // HOTEL_MENU_H
