#include "ldde.h"
#include "bdcontroll.h"
#include <QDebug>


// chamando
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
             qDebug() << "ACHOU";
       }
        else
            atual = atual->prox;
    }
    qDebug() << " NAO ACHOU";
}

bool ldde::remover(QString T){
    No* b = buscar(T);

    if(!b)
        return false;

    No* antesNoB = b->ant;
    No* depoisNoB = b->prox;

    if(antesNoB)
        antesNoB->prox =depoisNoB;
    else
        primeiro = depoisNoB;

    if(depoisNoB)
        depoisNoB->ant = antesNoB;
    else
        ultimo = antesNoB;

    BDcontroll Banco;
    Banco.deletarcompromisso(T);

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
