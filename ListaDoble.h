//codigo de las Listas doblemente enlazadas

#ifndef LISTA_DOBLE
#define LISTA_DOBLE
#include "Nodo.h"
#include <iostream>
using namespace std;

class ListaDoble{
    private:
        Nodo *elemento;
        bool ListaVacia(){
            return (this->elemento==nullptr);
        }
    public:
        ListaDoble(){
            this->elemento=nullptr;
        }

        ~ListaDoble(){
            
        }

        void Insertar(int v){
            Nodo *nuevo=new Nodo(v);
            if(this->ListaVacia()){
                this->elemento=nuevo;
            }else{
                nuevo->anterior=this->elemento;
                this->elemento->siguiente=nuevo;
                this->elemento=nuevo;

            }

        }

        void Mostrar(){
            Nodo  *tmp = this->elemento;
            while(tmp){
                cout << tmp->valor << " --> ";
                tmp = tmp->anterior;

            }
            cout << "NULL \n";


        }
};
#endif