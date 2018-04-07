#ifndef TELINHABUSCAR_H
#define TELINHABUSCAR_H

#include <QDialog>

namespace Ui {
class telinhaBuscar;
}

class telinhaBuscar : public QDialog
{
    Q_OBJECT

public:
    explicit telinhaBuscar(QWidget *parent = 0);
    ~telinhaBuscar();

private:
    Ui::telinhaBuscar *ui;
};

#endif // TELINHABUSCAR_H
