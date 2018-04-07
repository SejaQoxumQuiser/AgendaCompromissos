#ifndef FILA_H
#define FILA_H
#include "pessoa.h"
#include <QDebug>



class fila
{
public:
    fila();
    int i,f,n;
    pessoa *v;
    bool enfileira(pessoa T);
    bool desenfileira();
    void imprimir();
    void buscar(QString T);
};

#endif // FILA_H
