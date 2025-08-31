
//Codigo de la semana 5

#ifndef Lista_H
#define Lista_H
#include "Nodo.h"
#include <iostream>

using namespace std;

class Lista{
    private:

        Nodo *Primero;
        Nodo *Ultimo;
        bool ListaVacia(){
            return this->Primero == nullptr;
        }

    public:

        Lista(){

            this->Primero = nullptr;
            this->Ultimo = nullptr;
        }
        ~Lista(){}
        void Insertar(Estudiante v){
            Nodo* nuevo = new Nodo(v);
            if(this->ListaVacia()){
                this->Primero = nuevo;
                this->Ultimo = nuevo;  
             }else{
                this->Ultimo->siguiente = nuevo;
                this->Ultimo = nuevo;
             }
        }

        void Mostrar(){
            Nodo *tmp = this->Primero;
            if(!this->ListaVacia()){
                cout <<"Id\tNombre\tApellido\tNotaFinal\n";
                while(tmp){
                cout << tmp->valor.getIdEstudiante() << " \t ";
                cout << tmp->valor.getNombre() << " \t ";
                cout << tmp->valor.getApellido() << " \t ";
                cout << tmp->valor.getNotaFinal() << " \n ";
                tmp = tmp->siguiente;
            }
            cout << "NULL\n" << endl;
            }else{
                cout << "La lista esta vacia" << endl;
            }
            
            
        }

    

};



#endif 