#ifndef TRABAJADOR_TIEMPO_COMPLETO
#define TRABAJADOR_TIEMPO_COMPLETO
#include "Trabajador.h"
class TrabajadorTiempoCompleto : public Trabajador{
    private:
        float descuentoIsss;
        float descuentoAfp;
    public:
        TrabajadorTiempoCompleto(){
            this->descuentoIsss = 0;
            this->descuentoAfp = 0;
        }
        TrabajadorTiempoCompleto(int id, string n, string a, float sm) : Trabajador(id, n, a){
            this->sueldoMensual = sm;
            //Haciendo el calculo del descuento Isss y Afp
            this->descuentoIsss = 0; //Hacer calculo como tarea
            this->descuentoAfp = 0; //Hacer calculo como tarea
            this->descuentoIsr = 0; //Hacer tarea
            this->totalPagar = this->sueldoMensual - this->descuentoIsss - this->descuentoAfp - this->descuentoIsr;
        }
        float getDescuentoIsss(){
            return this->descuentoIsss;
        }
        float getDescuentoAfp(){
            return this->descuentoAfp;
        }
        int getTipoTrabajador(){
            return 1;
        }
};
#endif