#ifndef CALENDARIOCOMPROMISSOS_H
#define CALENDARIOCOMPROMISSOS_H

#include <QDialog>

namespace Ui {
class calendarioCompromissos;
}

class calendarioCompromissos : public QDialog
{
    Q_OBJECT

public:
    explicit calendarioCompromissos(QWidget *parent = 0);
    ~calendarioCompromissos();

private:
    Ui::calendarioCompromissos *ui;
};

#endif // CALENDARIOCOMPROMISSOS_H
