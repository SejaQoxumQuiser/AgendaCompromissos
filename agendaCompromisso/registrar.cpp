#include "registrar.h"
#include "ui_registrar.h"
#include "calendariocompromissos.h"

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

void registrar::on_pushButton_2_clicked()
{
      hide();
 //     calendarioCompromissos calen;
 //   calen.setModal(true);
 //   calen.exec();
}

void registrar::on_pushButton_clicked()
{

}
