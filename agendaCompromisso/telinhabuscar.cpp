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
    Banco.carregarPessoas();
    for(int i = 0 ; i<=100; i++){
            ui->listWidget->addItem(Banco.Fila.v[i].nome + ' ' + Banco.Fila.v[i].email );
    }
}

telinhaBuscar::~telinhaBuscar()
{
    delete ui;
}
