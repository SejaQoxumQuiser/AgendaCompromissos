#ifndef REGISTRARCOMPROMISSO_H
#define REGISTRARCOMPROMISSO_H

#include <QDialog>

namespace Ui {
class registrarCompromisso;
}


class registrarCompromisso : public QDialog
{
    Q_OBJECT

public:
    explicit registrarCompromisso(QWidget *parent = 0);
    ~registrarCompromisso();

private slots:
    void on_pushButton_clicked();

private:
    Ui::registrarCompromisso *ui;
};

#endif // REGISTRARCOMPROMISSO_H
