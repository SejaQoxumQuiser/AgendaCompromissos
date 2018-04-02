#include "registrar.h"
#include "ui_registrar.h"
#include "calendariocompromissos.h"
#include "mainwindow.h"
#include <string>
#include <QString>
#include "bdcontroll.h"
#include <QTime>


registrar::registrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrar)
{
    ui->setupUi(this);
}

registrar::~registrar()
{
    delete ui;
}

void registrar::on_pushButton_2_clicked()//cadastro
{
    BDcontroll banco;
    QString Nome = ui->lineEdit->text();
    QString Senha = ui->lineEdit_2->text();
    QString CPF = ui->lineEdit_3->text();
    QString email = ui->lineEdit_4->text();
    banco.adicionarRegistro(Nome, Senha, CPF, email);
     hide();
     calendario = new calendarioCompromissos(this);
     calendario->show();

}

void registrar::on_pushButton_clicked()//voltar
{


}
