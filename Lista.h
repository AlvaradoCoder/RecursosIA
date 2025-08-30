#ifndef LISTA
#define LISTA
#include "Nodo.h"
#include <iostream>
using namespace std;
class Lista{
    private:
        Nodo *Primero;
        Nodo *Ultimo;
        bool ListaVacia(){
            return (this->Primero==NULL);
        }
    public:
        Lista(){
            this->Primero = NULL;
            this->Ultimo = NULL;
        }
        ~Lista(){

        }
        void Insertar(int v){
            Nodo *nuevo = new Nodo(v);
            if (this->ListaVacia()){
                this->Primero = nuevo;
            }
            else{
                this->Ultimo->siguiente = nuevo;
            }
            this->Ultimo = nuevo;
        }
        void Mostrar(){
            Nodo *tmp = this->Primero;
            while (tmp){
                cout << tmp->valor << "-->";
                tmp = tmp->siguiente;
            }
            cout << "NULL\n";
        }
};
#endif