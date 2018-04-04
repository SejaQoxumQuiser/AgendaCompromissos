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
#include "ldde.h"
#include "compromisso.h"


namespace Ui {
    class Dialog;
}
class BDcontroll{
   public:
    BDcontroll();
    ldde Lista;

    void adicionarCompromisso(QString titulo, QString local, QString comentario, QString data, QString hora){


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

          query.prepare("INSERT INTO compromisso (titulo, data, local, hora, comentario) VALUES (:titulo, :data, :local, :hora, :comentario)");
          query.bindValue(":titulo", titulo);
          query.bindValue(":data", data);
          query.bindValue(":local", local);
          query.bindValue(":hora", hora);
          query.bindValue(":comentario", comentario);

          qDebug() << query.exec();
          qDebug() << query.lastError();

}
    void adicionarRegistro(QString Nome, QString Senha, QString CPF, QString email){

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


          query.prepare("INSERT INTO Registro (Nome, Senha, CPF, email) VALUES (:Nome, :Senha, :CPF, :email)");
          query.bindValue(":Nome", Nome);
          query.bindValue(":Senha", Senha);
          query.bindValue(":CPF", CPF);
          query.bindValue(":email", email);

          qDebug() << query.exec();
          qDebug() << query.lastError();

    }

    void carregarLista(){

        qDebug() << "CARREGANDO LISTA";
        db.setHostName("tyrprint.com");
        db.setPort(3306);
        db.setDatabaseName("tyrpr956_agendaDb");
        db.setUserName("tyrpr956_oxum");
        db.setPassword("agoravai");
        db.open();

        query.exec("SELECT titulo, data, local, hora FROM compromisso");
        while (query.next()) {
            QString titulo = query.value(0).toString();
            QString data = query.value(1).toString();
            QString local = query.value(2).toString();
            QString hora = query.value(3).toString();
            //QString comentario = query.value(4).toString();
            compromisso meuCompromisso(titulo, data, local, hora);
            //qDebug() << titulo << data << local << hora ;
            Lista.inserir(meuCompromisso);            
        }
    }


private:
    Ui::Dialog *ui;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    QSqlQuery query;
};

#endif // BDCONTROLL_H
