#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrar.h"
#include "calendariocompromissos.h"
#include "bdcontroll.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>

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
   // if(qry.exec("SELECT Nome, Senha, Role FROM Registro WHERE Nome=\'" + name + 
              //  "\' AND Senha=\'" + pasw +"'\'" )) // arrumar
    {
        if(qry.next()){
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


}
