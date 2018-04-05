#ifndef LDDE_H
#define LDDE_H

#include "no.h"




class ldde
{
private:
// xungles
public:
    No* primeiro;
    No* ultimo;
    int n;
    ldde();
    bool inserir(compromisso T);
    bool remover(QString T);
    No* buscar(QString T);
    void imprimir();
};

#endif // LDDE_H
