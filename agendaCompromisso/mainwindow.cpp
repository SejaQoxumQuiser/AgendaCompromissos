#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrar.h"
#include "calendariocompromissos.h"
#include "bdcontroll.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include "bdcontroll.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()//cadastro
{
    hide();
    regis = new registrar(this);
    regis->show();

}

void MainWindow::on_pushButton_clicked()//login
{
    QString name,pasw;   
    name = ui->login->text();
    pasw = ui->senha->text();

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("tyrprint.com");
    db.setPort(3306);
    db.setDatabaseName("tyrpr956_agendaDb");
    db.setUserName("tyrpr956_oxum");
    db.setPassword("agoravai");

    if (db.open())
        qDebug () << "conectou";

    QSqlQuery qry;
<<<<<<< HEAD
    qry.prepare("SELECT senha FROM Registro WHERE email = ?");
    qry.addBindValue(name);
    qry.exec();

    qDebug () << qry.value(0).toString();
          qry.first();
            if (qry.value(0).toString() == pasw){
=======
    if(qry.exec("SELECT Nome, Senha FROM typr956_agendaDb.Registro WHERE Nome=\'" + name +
                "\' AND Senha=\'" + pasw +"'\'" ))
    {
        if(qry.next()){
>>>>>>> parent of 0eb8d2c... Adicionando e mostrando os compromisso
            QString msg = "Login realisado com sucesso!!";
            QMessageBox::warning(this,"Login was Sucessful",msg);
            hide();
            calendario = new calendarioCompromissos(this);
            calendario->show();
          }else{
                QString msg = "Tente de novo";
                QMessageBox::warning(this,"Login ou Senha errado",msg);
                ui->login->setText("");
                ui->senha->setText("");

          }
        }    


