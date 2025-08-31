//codigo de semana6 hecho en clase
//puede tener errores ya que iba copiando rapido


#ifndef NODO_H
#define NODO_H
#include "Trabajador.h"

class Nodo {
    private:
        Trabajador *Valor;
        Nodo *Siguiente;
        

    public:

        Nodo(Trabajador *v, Nodo *sig=nullptr){ 
            this->Valor = v;
            this->Siguiente = sig;

        }

       friend class Lista;
};








#endif