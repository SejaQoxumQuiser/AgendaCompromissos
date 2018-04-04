#include "ldde.h"
#include <QDebug>

ldde::ldde()
{
    ldde::n = 0;
    ldde::primeiro = NULL;
    ldde::ultimo = NULL;
}

bool ldde::inserir(compromisso T){
    No* novoNo = new No(T);
    if(!novoNo){
        return false;
    }

    No* antesNo = NULL;
    No* depoisNo = primeiro;

    if(antesNo)
        antesNo->prox = novoNo;
    else
        primeiro = novoNo;

    if(depoisNo)
        depoisNo->ant = novoNo;
    else
        ultimo = novoNo;

    novoNo->ant = antesNo;
    novoNo->prox = depoisNo;


    return true;

}

No* ldde::buscar(QString T){
    No* atual = primeiro;
    while(atual){
        if(atual->valor.titulo == T){
             return atual;
       }
        else
            atual = atual->prox;
    }
}

bool ldde::remover(QString T){
    No* b = buscar(T);

    if(!b)
        return false;

    No* antesNoB = b->ant;
    No* depoisNoB = b->prox;

    if(antesNoB)
        antesNoB=depoisNoB;
    else
        primeiro = depoisNoB;

    if(depoisNoB)
        depoisNoB = antesNoB;

    delete b;
    return true;
}

void ldde::imprimir(){
    No* atual = primeiro;
    while(atual){
        qDebug() << atual->valor.titulo;
        qDebug() << atual->valor.local;
        qDebug() << atual->valor.data;
        qDebug() << atual->valor.hora;
        atual = atual->prox;
    }
}
