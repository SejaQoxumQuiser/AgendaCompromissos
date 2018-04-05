#include "registrarcompromisso.h"
#include "ui_registrarcompromisso.h"



registrarCompromisso::registrarCompromisso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrarCompromisso)
{
    ui->setupUi(this);
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);
}

registrarCompromisso::~registrarCompromisso()
{
    delete ui;
}

void registrarCompromisso::on_pushButton_clicked()
{

}
