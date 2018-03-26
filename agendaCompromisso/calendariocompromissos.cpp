#include "calendariocompromissos.h"
#include "registrarcompromisso.h"
#include "ui_calendariocompromissos.h"
#include <string>
#include <QString>
#include "bdcontroll.h"




using namespace std;

calendarioCompromissos::calendarioCompromissos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calendarioCompromissos)
{
    ui->setupUi(this);
    ui->groupBox->setVisible(false);
}

calendarioCompromissos::~calendarioCompromissos()
{
    delete ui;
}

void calendarioCompromissos::on_calendarWidget_selectionChanged()
{
       ui->MES->setText("2132141254");
}

void calendarioCompromissos::on_pushButton_2_clicked()
{

     QDate current = ui->calendar->selectedDate();

    // ui->MES->setText(current.toString("dd.MM.yyyy"));
     ui->groupBox->setVisible(true);
     ui->dateEdit->setDate(current);



}


void calendarioCompromissos::on_pushButton_3_clicked()
{
    BDcontroll banco;
    banco.adicionarCompromisso();
    QString titulo;
    QDateEdit data;
    QTimeEdit hora;
    QString local;
    QString comentario;
    ui->groupBox->setVisible(false);
}
