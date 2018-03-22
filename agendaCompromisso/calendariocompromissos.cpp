#include "calendariocompromissos.h"
#include "ui_calendariocompromissos.h"

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
