#ifndef TELINHABUSCAR_H
#define TELINHABUSCAR_H

#include <QDialog>
#include "bdcontroll.h"

namespace Ui {
class telinhaBuscar;
}

class telinhaBuscar : public QDialog
{
    Q_OBJECT

public:
    explicit telinhaBuscar(QWidget *parent = 0);
    BDcontroll Banco;
    ~telinhaBuscar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::telinhaBuscar *ui;
};

#endif // TELINHABUSCAR_H
