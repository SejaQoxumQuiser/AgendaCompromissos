#include "telinhabuscar.h"
#include "ui_telinhabuscar.h"
#include "bdcontroll.h"
#include <qdebug>
#include <QMessageBox>

telinhaBuscar::telinhaBuscar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telinhaBuscar)
{
    ui->setupUi(this);

   // BDcontroll Banco;
    Banco.carregarPessoas();
    for(int i = 0 ; i<=99; i++){
            ui->listWidget->addItem(Banco.Fila.v[i].nome + ' ' + Banco.Fila.v[i].email );
    }
}

telinhaBuscar::~telinhaBuscar()
{
    delete ui;
}

void telinhaBuscar::on_pushButton_clicked()
{
        QString usuario = ui->lineEdit->text();
        if (Banco.Fila.buscar(usuario)){
            QString msg = "Usuario achado";
            QMessageBox::warning(this,"Encontrado",msg);
        }
        else{
            QString msg = "Usuario nao encontrado";
            QMessageBox::warning(this,"cade?",msg);
 }
}
