#include "fila.h"

fila::fila()
{
    fila::i = 0;
    fila::f = 0;
    fila::n = 10;
    v = new pessoa[100];

}

bool fila::enfileira(pessoa T){
   if((f+1)%n == i)
       return false;

  v[f].email = T.email;
  v[f].nome = T.nome;

 // qDebug() <<T.nome<< T.email<< f;
  f++;
  return true;
}

bool fila::buscar(QString T){
    for (int i = 0; i <= 10; i++){
        if (v[i].nome == T){
            return true;
        }
    }
    return false;
 }

void fila::imprimir(){
    while (i != f){
        qDebug() << v[i].email << v[i].nome;
        i++;
   }
}




