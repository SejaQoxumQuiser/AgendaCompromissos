#ifndef CALENDARIOCOMPROMISSOS_H
#define CALENDARIOCOMPROMISSOS_H

#include <QDialog>



namespace Ui {
class calendarioCompromissos;
    void carregarLista();
}


class calendarioCompromissos : public QDialog
{
    Q_OBJECT

public:

    explicit calendarioCompromissos(QWidget *parent = 0);
    ~calendarioCompromissos();
    void mostrarLista();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_remover_clicked();




    void on_pushButton_clicked();

private:
    Ui::calendarioCompromissos *ui;
};

#endif // CALENDARIOCOMPROMISSOS_H
