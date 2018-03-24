#include "calendariocompromissos.h"
#include "registrarcompromisso.h"
#include "ui_calendariocompromissos.h"
#include <string>
#include <QString>




using namespace std;

calendarioCompromissos::calendarioCompromissos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calendarioCompromissos)
{
    ui->setupUi(this);
}

calendarioCompromissos::~calendarioCompromissos()
{
    delete ui;
}

void calendarioCompromissos::on_calendarWidget_selectionChanged()
{

}

void calendarioCompromissos::on_pushButton_2_clicked()
{

     QDate current = ui->calendar->selectedDate();

     ui->MES->setText(current.toString("dd.MM.yyyy"));

     QString nome = "OASDKOPASKDODS";

     ui->MES->setText(nome);


}

void calendarioCompromissos::on_pushButton_clicked()
{
    hide();
    registrarCompromisso reg;
    reg.setModal(true);
    reg.exec();
}
