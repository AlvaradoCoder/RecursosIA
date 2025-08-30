#include <iostream>
using namespace std;
#include "Trabajador.h"
#include "TrabajadorTiempoCompleto.h"
#include "TrabajadorPorHora.h"
#define TAM 10
int menu(){
    int op;
    cout << "Menu de opciones\n";
    cout << "1. agregar trabajador\n";
    cout << "2. mostrar planilla\n";
    cout << "3. ver detalles del trabajador\n";
    cout << "4. Salir\n";
    cout << "Digite la opcion : ";
    cin >> op;
    return op;
}
int main(){
    //Declarando un arreglo polimorfico
    Trabajador *arreglo[TAM];
    arreglo[0] = new TrabajadorTiempoCompleto(1, "Juan", "Perez", 500);
    arreglo[1] = new TrabajadorPorHora(2, "Mario", "Diaz", 5.5, 10);
    cout << arreglo[0]->getTipoTrabajador() << endl;
    cout << arreglo[1]->getTipoTrabajador() << endl;

    return 0;
}