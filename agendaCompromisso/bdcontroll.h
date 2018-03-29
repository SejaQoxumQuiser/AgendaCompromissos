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
          db.setHostName("50.116.87.233");
          db.setPort(3307);
          db.setDatabaseName("typr956_agendaDb");
          db.setUserName("typr956_oxum");
          db.setPassword("agoravai");
          db.open();


    }


    void popularLista(){

    }
};

#endif // BDCONTROLL_H
