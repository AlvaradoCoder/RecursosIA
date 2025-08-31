//codigo de las Listas doblemente enlazadas

#ifndef NODO
#define NODO
class Nodo{
    private:
        int valor;
        Nodo *siguiente;
        Nodo *anterior;
    public:
        Nodo(int v, Nodo *sig=nullptr, Nodo *ant=nullptr){
            this->valor=v;
            this->siguiente=sig;
            this->anterior=ant;
        }

        friend class ListaDoble;
};


#endif 