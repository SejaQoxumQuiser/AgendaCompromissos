#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrar.h"
#include "calendariocompromissos.h"
#include "bdcontroll.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
<<<<<<< HEAD
#include <QSqlDatabase>
#include "bdcontroll.h"
#include <cstdlib>
#include <iostream>


=======
>>>>>>> parent of a5a642c... Login funcionando

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

    QSqlQuery qry;
<<<<<<< HEAD

    qry.prepare("SELECT senha FROM Registro WHERE email = ?");
    qry.addBindValue(name);
    qry.exec();
<<<<<<< HEAD
    if(name == "test" && pasw == "teste")//name == ? && senha == ?
    {
    qDebug () << qry.value(0).toString();
          qry.first();
=======



    if(name == "test" && pasw == "test"){
    qDebug () << qry.value(0).toString();
        qry.first();

        if(qry.next()){
>>>>>>> f75f4c17b59da79a3d717e8cf7e5f8e808633521

=======
   // if(qry.exec("SELECT Nome, Senha, Role FROM Registro WHERE Nome=\'" + name + 
              //  "\' AND Senha=\'" + pasw +"'\'" )) // arrumar
    {
        if(qry.next()){
>>>>>>> parent of a5a642c... Login funcionando
            QString msg = "Login realisado com sucesso!!";
            QMessageBox::warning(this,"Login was Sucessful",msg);
            hide();
            calendario = new calendarioCompromissos(this);
            calendario->show();
<<<<<<< HEAD
          }

        else{
                QString msg = "Tente de novo";
                QMessageBox::warning(this,"Login ou Senha errado",msg);
                ui->login->setText("");
                ui->senha->setText("");

<<<<<<< HEAD
      }
=======
    }
  }
>>>>>>> f75f4c17b59da79a3d717e8cf7e5f8e808633521
}
=======

        }else{
            QString msg = "Tente de novo";
            QMessageBox::warning(this,"Login ou Senha errado",msg);
            ui->login->setText("");
            ui->senha->setText("");
        }

    }
>>>>>>> parent of a5a642c... Login funcionando


}
