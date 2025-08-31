//codigo de semana6 hecho en clase
//puede tener errores ya que iba copiando rapido

#include <iostream>
using namespace std;
#include "Lista.h"
#include "TrabajadorTiempoCompleto.h"
#include "TrabajadorPorHora.h"
#include <stdlib.h>


int menu(){
    int op;
    cout << "Menu de opciones\n";
    cout<< "1. Agregar Trabajador\n";
    cout<< "2. Eliminar\n";
    cout << "3. Mostrar\n";
    cout << "4. Salir\n";
    cout << "Digite la opcion: ";
    cin >> op;
    return op;
    
}

Trabajador *agregarTrabajador(){
    Trabajador *tb;
    int id, nht, tipo;
    string n,a;
    float s;

    cout << "Digite el id del trabajador: ";
    cin >> id;
    cout << "Digite el nombre del trabajador: ";
    cin >> n;
    cout << "Digite el apellido del trabajador: ";
    cin >> a;
    cout << "Digite el tipo de trabajador (1-TTC, 2-TH): ";
    cin >> tipo;

    if(tipo == 1){
        cout << "Digite el sueldo mensual: ";
        cin >> s;
        tb = new TrabajadorTiempoCompleto(id, n, a, s);
    }else{
        cout << "Digite el sueldo por hora: ";
        cin >> s;
        cout << "Digite el numero de horas trabajadas: ";
        cin >> nht;
        tb = new TrabajadorPorHora(id, n, a, s, nht);
    }
    return tb;

}

int main(){
    Lista planilla;
    int opc, id;
    do{
        system("cls");
        opc = menu();
        switch(opc){
            case 1:
                planilla.Insertar(agregarTrabajador());
                break;
            case 2:
                cout << "Digite el id del trabajador a eliminar: ";
                cin >> id;
                if(planilla.Eliminar(id)){
                    cout << "Trabajador eliminado\n";
                } else {
                    cout << "No se encontro el trabajador\n";
                }
                break;
            case 3:
                planilla.Mostrar();
                break;
            case 4:
                cout << "Saliendo del programa\n";
                break;
            default:
                cout << "Opcion no valida\n";

        }
        system("pause");


    }while((opc=menu())!=4);
    return 0;

}   