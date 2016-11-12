#include "hotel_menu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Hotel_menu w;
    w.showFullScreen();
  //  w.show();

    return a.exec();
}
