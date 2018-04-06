#include "calendariocompromissos.h"
#include "registrarcompromisso.h"
#include "ui_calendariocompromissos.h"
#include <string>
#include <QString>
#include "bdcontroll.h"
#include <QTime>

using namespace std;


calendarioCompromissos::calendarioCompromissos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calendarioCompromissos){
    ui->setupUi(this);
    calendarioCompromissos::mostrarLista();
    ui->groupBox->setVisible(false);    
}



calendarioCompromissos::~calendarioCompromissos()
{
    delete ui;
}

void calendarioCompromissos::mostrarLista(){
    ui->listWidget->clear();
    BDcontroll banco;
    banco.carregarLista();
    No* atual = banco.Lista.primeiro;
    while(atual){
        ui->listWidget->addItem(atual->valor.titulo + ' ' + atual->valor.local + ' ' + atual->valor.data + ' ' + atual->valor.hora);
        atual = atual->prox;
    }
}


void calendarioCompromissos::on_pushButton_2_clicked()
{

     QDate current = ui->calendar->selectedDate();    
     ui->groupBox->setVisible(true);
     ui->dateEdit->setDate(current);
     ui->timeEdit->setTime(QTime::currentTime());
}


void calendarioCompromissos::on_pushButton_3_clicked()
{
    BDcontroll banco;
    QString titulo = ui->lineEdit->text();
    QString data = ui->dateEdit->date().toString("dd/MM/yyyy");
    QString hora = ui->timeEdit->time().toString("h:m ap");
    QString local = ui->lineEdit_2->text();
    QString comentario = ui->lineEdit_3->text();
    banco.adicionarCompromisso(titulo, local, comentario, data, hora);
    ui->groupBox->setVisible(false);
    calendarioCompromissos::mostrarLista();
}

void calendarioCompromissos::on_remover_clicked()
{
    BDcontroll banco;
    banco.carregarLista();
    QRegExp tagExp(" ");
    QStringList query = ui->listWidget->currentItem()->text().split(tagExp);
    qDebug() << ui->listWidget->currentItem()->text();
    qDebug() << query;
    banco.Lista.remover(query.at(0));
    calendarioCompromissos::mostrarLista();
}
