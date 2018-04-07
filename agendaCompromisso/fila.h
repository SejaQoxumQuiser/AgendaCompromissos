#ifndef FILA_H
#define FILA_H
#include "pessoa.h"
#include <QDebug>



class fila
{
public:
    fila();
    int i,f,n;
    pessoa *v[100];
    bool enfileira(pessoa *T);
    bool desenfileira();
    void imprimir();
    pessoa *buscar(QString T);
};

#endif // FILA_H
