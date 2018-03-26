#ifndef BDCONTROLL_H
#define BDCONTROLL_H
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>



class BDcontroll
{
public:
    BDcontroll();

    void adicionarCompromisso(){
        
          QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
          db.setHostName("db4free.net");
          db.setPort(3307);
          db.setDatabaseName("vinnys");
          db.setUserName("vinnys");
          db.setPassword("35624c");
          db.open();


    }


    void popularLista(){

    }
};

#endif // BDCONTROLL_H
