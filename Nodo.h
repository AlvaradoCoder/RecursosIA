
//Codigo de la semana 5

#ifndef NODO_H
#define NODO_H
#include "Estudiante.h"

class Nodo {
    private:
        Estudiante valor;
        Nodo* siguiente;





    public:

        Nodo(Estudiante v, Nodo *sig = nullptr) {

            this->valor = v;
            this->siguiente = sig;  

        }
        friend class Lista;

};













#endif 