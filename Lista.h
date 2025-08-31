#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include "Trabajador.h"
#include <iostream>
using namespace std;

class Lista{

    private: 
        Nodo *Primero;
        Nodo *Ultimo;

        bool ListaVacia(){
            return (this->Primero == nullptr);
        }
    public:
        Lista(){
            this->Primero = nullptr;
            this->Ultimo = nullptr;
        }

        ~Lista(){
            this->Ultimo = nullptr;
            while(this->Primero ){
                Nodo *tmp = this->Primero;
                this->Primero = this->Primero->Siguiente;
                delete tmp;
                
            }
            
        }

        void Insertar(Trabajador *t){
            Nodo *nuevo = new Nodo(t);
            if(this->ListaVacia()){
                this->Primero = nuevo;
                
            } else {
                this->Ultimo->Siguiente = nuevo;
                this->Ultimo = nuevo;
            }
        }

        void Mostrar(){
            if(this->ListaVacia())
            cout << "La lista esta vacia\n";
            else{
                cout << "Id\tNombre\tApellido\tSueldo\tTotalPagar\n";
                Nodo *tmp = this->Primero;
                while(tmp){
                    cout << tmp->Valor->getIdTrabajador()<<"\t";
                    cout << tmp->Valor->getNombre()<<"\t";
                    cout << tmp->Valor->getApellido()<<"\t";
                    cout << tmp->Valor->getTotalPagar()<<"\n";
                    tmp = tmp->Siguiente;
                    
                }
            }
        }
        bool Eliminar(int id){
            bool retorno = false;
            //busqueda del elemento a eliminar
            bool encontrado = false;
            Nodo *aux = this->Primero;
            Nodo *tmp = nullptr;
            Nodo *anterior = nullptr;
            while(aux && !encontrado){
                if(aux->Valor->getIdTrabajador() == id){
                    //encontrado
                    encontrado = true;
                    tmp = aux;
                }else{
                    anterior = aux;
                    aux = aux->Siguiente;
                }
            }
            //fin busqueda
            if(tmp){
                if(tmp==this->Primero){
                //Al inicio
                this->Primero = this->Primero->Siguiente;

            }else{
                if(tmp == this->Ultimo){
                    //Al final
                    this->Ultimo = anterior;
                    this->Ultimo->Siguiente = nullptr;
                }else{
                    //En el medio
                    anterior->Siguiente = tmp->Siguiente;
                }

            }
                retorno = true;
                delete tmp;
                

            }
            

            
            return retorno;
            }
        


};




#endif