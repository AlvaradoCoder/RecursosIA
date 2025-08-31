//Codigo de la semana 5


#include <iostream>
#include "Lista.h"
#include <stdlib.h>
using namespace std;


int menu(){

    int opc;

    cout << "1. Agregar Estudiantes" << endl;
    cout << "2. Mostrar Lista de aprobados" << endl;
    cout << "3. Salir" << endl;
    cout << "Digite la opcion: ";
    cin >> opc;
    return opc;

}



int main() {
    //quedo de tarea implementar el menu y las opciones(con sus respectivas funciones)....
    Lista lst;
    int opc;
    do{
        system("cls");
        system("pause");

        opc = menu();
        switch(opc){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            default:
        }
            





    }while(opc != 3);

   
    return 0;
}