#ifndef BDCONTROLL_H
#define BDCONTROLL_H
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QObject>
#include <QDebug>
#include <QDateEdit>
#include <QTime>
#include <QTimeEdit>

class BDcontroll{
   public:
    BDcontroll();

    void adicionarCompromisso(QString titulo, QString local, QString comentario, QString data, QString hora){

          QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
          db.setHostName("tyrprint.com");
          db.setPort(3306);
          db.setDatabaseName("tyrpr956_agendaDb");
          db.setUserName("tyrpr956_oxum");
          db.setPassword("agoravai");

          if(db.open()){
              qDebug() << "Conectou";
          }
          else{
              qDebug() << "Falhou";

          }

          QSqlQuery query;
          query.prepare("INSERT INTO compromisso (titulo, data, local, hora, comentario) VALUES (:titulo, :data, :local, :hora, :comentario)");
          query.bindValue(":titulo", titulo);
          query.bindValue(":data", data);
          query.bindValue(":local", local);
          query.bindValue(":hora", hora);
          query.bindValue(":comentario", comentario);

          qDebug() << query.exec();
          qDebug() << query.lastError();

    }

    void carregarLista(){
    }
};

#endif // BDCONTROLL_H
