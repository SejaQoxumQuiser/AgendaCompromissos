//
// Created by eve on 21/03/18.
//
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

template <typename T>
class Ldde;

template <typename T>
class No{
private:
    T valor;
    No * prox;
    No*  ant;
public:
    T getValor() const{
        return valor;
    }

    No *getProx() const {
        return prox;
    }

    No *getAnt() const {
        return ant;
    }

    void setProx(No *prox) {
        No::prox = prox;
    }

    void setAnt(No *ant) {
        No::ant = ant;
    }

    No(T valor):valor(valor), prox(NULL), ant(NULL) {}

    friend class Ldde<T>;
};
template <typename T>
class Ldde{
    private:
        No<T>* primeiro;
        No<T>* ultimo;
        int n;
    public:
        Ldde() : primeiro(NULL), ultimo(NULL), n(0) {}

        bool insereLista(T valor){
            No<T>* novoNo = new No<T>(valor);

            if(!novoNo)
                return false;

            No<T>* antesNo = NULL;
            No<T>* depoisNo = primeiro;

            while (depoisNo && depoisNo->getValor() < novoNo->getValor()){
                antesNo = depoisNo;
                depoisNo = depoisNo->getProx();
            }

            if(antesNo)
                antesNo->setProx(novoNo);
            else
                //lista vazia
                primeiro = novoNo;
            if(depoisNo)
                depoisNo->setAnt(novoNo);
            else
                //lista vazia
                ultimo = novoNo;

            novoNo->setAnt(antesNo);
            novoNo->setProx(depoisNo);

            n++;

            return true;

        }

    No<T> * buscaNo(T valor){
        No<T>* atual = primeiro;

        while (atual && atual->getValor() < valor){
            atual = atual->getProx();
        }

        if(atual && atual->getValor() != valor)
            return NULL;
        //    cout<<"nao encontrado"<<endl;

        return atual;

    }
    void busca(T valor){
        No<T>* NoBuscado = buscaNo(valor);
        if(!NoBuscado)
            cout<<"nao encontrado"<<endl;

        cout<<NoBuscado<<endl;
    }
    bool removeNo(T valor){

        No<T>* b = buscaNo(valor);

        if(!b)
            return  false;

        No<T> * antesNoB = b->getAnt();
        No<T> * depoisNoB = b->getProx();

        if(antesNoB)
            antesNoB->setProx(depoisNoB);
        else
            primeiro = depoisNoB;
        if(depoisNoB)
            depoisNoB->setAnt(antesNoB);

        delete b;
        n--;
        return true;

    }
    void imprime(){
        No<T>* atual = primeiro;
        while (atual){
            cout<<atual->getValor()<<endl;
            atual = atual->getProx();
        }
    }
};
int main(){
    cout<<"adsasdasdas"<<endl;
    Ldde<int> listaInt;

    listaInt.insereLista(23);
    listaInt.insereLista(4);
    listaInt.insereLista(123);
    listaInt.insereLista(56);
    listaInt.imprime();

    listaInt.busca(123);

    return 0;
}
