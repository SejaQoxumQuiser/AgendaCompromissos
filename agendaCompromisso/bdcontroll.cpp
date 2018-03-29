#include "bdcontroll.h"

QSqlDatabase BDcontroll::db = QSqlDatabase::addDatabase("QMYSQL");
BDcontroll *BDcontroll::obj = new BDcontroll;


BDcontroll::BDcontroll(QObject *parent):QObject(parent)
{


}


BDcontroll *BDcontroll::obj2()
{
    if(!obj){
        obj = new BDcontroll();
    }
    return obj;
}

QSqlDatabase BDcontroll::db2()
{
    return db;

}
