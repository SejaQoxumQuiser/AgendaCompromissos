#ifndef REGISTRAR_H
#define REGISTRAR_H

#include <QDialog>
#include "calendariocompromissos.h"




namespace Ui {
class registrar;
}

class registrar : public QDialog
{
    Q_OBJECT

public:
    explicit registrar(QWidget *parent = 0);
    ~registrar();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::registrar *ui;
    calendarioCompromissos *calendario;

};

#endif // REGISTRAR_H
