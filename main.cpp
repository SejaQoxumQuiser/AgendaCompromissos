//
// Created by eve on 21/03/18.
//
#include <iostream>
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
    No(T valor):valor(valor), prox(NULL), ant(NULL) {}

    friend class Ldde<T>;
};

int main(){

    return 0;
}
