#include "fila.h"

fila::fila()
{
    fila::i = 0;
    fila::f = 0;
    fila::n = 100;

}

bool fila::enfileira(pessoa *T){
    if((f+1)%n == i)
               return false;

           v[f]->email = T->email;
           v[f]->nome = T->nome;
           f++;
           return true;
}

pessoa* fila::buscar(QString T){
    for (int i = 0; i <= 10; i++){
        if (v[i]->nome == T){
            return v[i];
        }
    }
 }

void fila::imprimir(){
    while (i != f){
        qDebug() << v[i]->email << v[i]->nome;
        i++;
   }
}




