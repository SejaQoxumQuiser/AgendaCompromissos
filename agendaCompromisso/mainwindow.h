#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "registrar.h"
#include "calendariocompromissos.h"
#include <QSqlRelationalTableModel>


<<<<<<< HEAD

=======
>>>>>>> f75f4c17b59da79a3d717e8cf7e5f8e808633521
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
};

#endif // MAINWINDOW_H
