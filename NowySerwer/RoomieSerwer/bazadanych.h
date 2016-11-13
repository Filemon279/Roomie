#ifndef BAZADANYCH_H
#define BAZADANYCH_H

#include <QtSql>
#include <QString>
#include <QMessageBox>
#include <QSpacerItem>
#include <QGridLayout>

class BazaDanych
{

public:
    BazaDanych();
    bool baza;
    QString connect();
};

QT_BEGIN_NAMESPACE
class QSqlDatabase;
QT_END_NAMESPACE
extern QSqlDatabase Baza;
extern void initBaza();

extern int message_box(QString title, QString message, QWidget *widget);


#endif // BAZADANYCH_H
