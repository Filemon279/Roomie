#ifndef BAZADANYCH_H
#define BAZADANYCH_H

#include <QtSql>
#include <QString>

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


#endif // BAZADANYCH_H
