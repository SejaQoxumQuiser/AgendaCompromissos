#include "telinhabuscar.h"
#include "ui_telinhabuscar.h"
#include "bdcontroll.h"
#include <qdebug>

telinhaBuscar::telinhaBuscar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telinhaBuscar)
{
    ui->setupUi(this);

    BDcontroll Banco;
    //Banco.carregarPessoas();
    ui->listWidget->addItem("123213213");
    //qDebug() << Banco.Fila.v[0]->nome;
}

telinhaBuscar::~telinhaBuscar()
{
    delete ui;
}
