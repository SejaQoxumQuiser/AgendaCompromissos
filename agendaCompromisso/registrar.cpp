#include "registrar.h"
#include "ui_registrar.h"
#include "calendariocompromissos.h"
#include "mainwindow.h"

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
     hide();
     calendario = new calendarioCompromissos(this);
     calendario->show();
}

void registrar::on_pushButton_clicked()//voltar
{

}
