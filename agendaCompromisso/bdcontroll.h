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
#include "compromisso.h"
#include "ldde.h"
#include "fila.h"



namespace Ui {
    class Dialog;
}
class BDcontroll{
   public:
    BDcontroll();
    ldde Lista;
    fila Fila;

    void conectar(){

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

    }

    void adicionarCompromisso(QString titulo, QString local, QString comentario, QString data, QString hora){

          conectar();

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

          conectar();

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
        conectar();
        query.exec("SELECT titulo, data, local, hora FROM compromisso");
        while (query.next()) {
            QString titulo = query.value(0).toString();
            QString data = query.value(1).toString();
            QString local = query.value(2).toString();
            QString hora = query.value(3).toString();
            compromisso meuCompromisso(titulo, data, local, hora);
            Lista.inserir(meuCompromisso);

        }
    }

    void deletarcompromisso(QString titulo){
        conectar();
        qDebug() << "deletando";
        query.prepare("DELETE FROM compromisso WHERE titulo = ?");
        query.addBindValue(titulo);
        query.exec();
    }

    void carregarPessoas(){
        conectar();
        query.exec("SELECT nome, email FROM tyrpr956_agendaDb.Registro");
        while(query.next()){
            pessoa Pessoa(query.value(0).toString(), query.value(1).toString());
            qDebug() << query.value(0).toString() << query.value(1).toString();
            Fila.enfileira(Pessoa);
        }
    }


private:
    Ui::Dialog *ui;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    QSqlQuery query;
};

#endif // BDCONTROLL_H
