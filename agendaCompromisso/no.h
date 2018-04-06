#ifndef NO_H
#define NO_H
#include "compromisso.h"



class No
{
public:    
    No * prox;
    No * ant;
    compromisso valor;
    No(compromisso T);

private:

};

#endif // NO_H
