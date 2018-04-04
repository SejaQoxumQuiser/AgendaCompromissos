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

private slots:
    void on_calendarWidget_selectionChanged();

    void on_pushButton_2_clicked();    

    void on_pushButton_3_clicked();

private:
    Ui::calendarioCompromissos *ui;
};

#endif // CALENDARIOCOMPROMISSOS_H
