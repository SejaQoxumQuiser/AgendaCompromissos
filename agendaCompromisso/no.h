#ifndef NO_H
#define NO_H
#include "compromisso.h"



class No
{
public:
    //iago salva patria
    No * prox;
    No * ant;
    compromisso valor;

    No(compromisso T);
private:

};

#endif // NO_H
