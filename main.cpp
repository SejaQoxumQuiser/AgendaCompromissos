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
class Pessoa{

private:
    int id;

    string nome,email,cpf,senha;

public:
    int getId() const {
        return id;
    }

    const string &getNome() const {
        return nome;
    }

    const string &getEmail() const {
        return email;
    }

    const string &getCpf() const {
        return cpf;
    }

    const string &getSenha() const {
        return senha;
    }

    bool operator<(const Pessoa& p){
        return nome < p.nome;
    }

    bool operator==(const Pessoa& p){
        return nome == p.nome;
    }
};
ostream& operator<< (ostream& out, const Pessoa& val){
    out <<"Id: "<<val.getId()<<"Nome: "<<val.getNome()<<"Email: "<<val.getEmail()<<" CPF: "<<val.getCpf()<<"Senha: "<<val.getSenha();
    return out;
}
template <typename T>
ostream& operator<< (ostream& out, const No<T>* val){
    out <<val->getValor();
    return out;
}

int main(){

    return 0;
}
