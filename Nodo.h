#ifndef NODO
#define NODO
#include <stdio.h>
class Nodo{
    private:
        int valor;
        Nodo *siguiente;
    public:
        Nodo(int v, Nodo *sig=NULL){
            this->valor = v;
            this->siguiente = sig;
        }
        friend class Lista;
};
#endif