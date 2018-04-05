#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registrar.h"
#include "calendariocompromissos.h"
#include <QSqlRelationalTableModel>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlRelationalTableModel * pessoa;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    
private:
    Ui::MainWindow *ui;
    registrar *regis;
    calendarioCompromissos *calendario;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
};

#endif // MAINWINDOW_H
