#ifndef BDCONTROLL_H
#define BDCONTROLL_H
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QObject>



class BDcontroll:public QObject
{
    Q_OBJECT
public:
    explicit BDcontroll(QObject *parent = 0);

    static BDcontroll *obj;
    static BDcontroll *obj2();


    static QSqlDatabase db;
    static QSqlDatabase db2();

    void adicionarCompromisso(){
        
          QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
          db.setHostName("localhost");
          db.setPort(3307);
          db.setDatabaseName("teste");
          db.setUserName("warned");
          db.setPassword("23081998");
          db.open();


    }
};

#endif // BDCONTROLL_H
