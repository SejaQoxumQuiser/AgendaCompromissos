#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrar.h"
#include "calendariocompromissos.h"
#include "bdcontroll.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QSqlDatabase>
#include <cstdlib>
#include <iostream>


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
    BDcontroll banco;
    banco.conectar();

    QSqlQuery qry;


    qry.prepare("SELECT Senha from tyrpr956_agendaDb.Registro;");
    qry.addBindValue(name);
    qry.exec();

    qDebug () << qry.value(0).toString();
          qry.first();    
    qDebug () << qry.value(0).toString();

    if(name.isEmpty() || pasw.isEmpty()){
        QString msg = "Tente de novo";
        QMessageBox::warning(this,"Empty",msg);
    }
    else{
        if(qry.value(0).toString() == pasw){
            QString msg = "Login realisado com sucesso!!";
            QMessageBox::warning(this,"Login was Sucessful",msg);
            hide();
            calendario = new calendarioCompromissos(this);
            calendario->show();
          }

        else{
                QString msg = "Login ou Senha errado!!";
                QMessageBox::warning(this,"Tente de novo",msg);
                ui->login->setText("");
                ui->senha->setText("");
      }
   }
}


