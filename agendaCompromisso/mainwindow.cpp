#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registrar.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    hide();
    registrar registrar2;
    registrar2.setModal(true);
    registrar2.exec();

}

void MainWindow::on_pushButton_clicked()
{

}
