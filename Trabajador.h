#ifndef TRABAJADOR
#define TRABAJADOR
#include <string>
using namespace std;
class Trabajador{
    protected:
        int idTrabajador;
        string nombre;
        string apellido;
        float sueldoMensual;
        float descuentoIsr;
        float totalPagar;
    public:
        Trabajador(){
            this->idTrabajador = 0;
            this->descuentoIsr = 0;
            this->sueldoMensual = 0;
            this->totalPagar = 0;
        }
        Trabajador(int id, string n, string a){
            this->idTrabajador = id;
            this->nombre = n;
            this->apellido = a;
            this->sueldoMensual = 0;
            this->descuentoIsr = 0;
            this->totalPagar = 0;
        }
        int getIdTrabajador(){
            return this->idTrabajador;
        }
        string getNombre(){
            return this->nombre;
        }
        string getApellido(){
            return this->apellido;
        }
        float getSueldoMensual(){
            return this->sueldoMensual;
        }
        float getDescuentoIsr(){
            return this->descuentoIsr;
        }
        float getTotalPagar(){
            return this->totalPagar;
        }
        virtual int getTipoTrabajador()=0;
};
#endif