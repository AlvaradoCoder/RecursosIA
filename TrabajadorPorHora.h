#ifndef TRABAJADOR_POR_HORA
#define TRABAJADOR_POR_HORA
#include "Trabajador.h"
class TrabajadorPorHora : public Trabajador{
    private:
        float sueldoPorHora;
        int numeroHorasTrab;
    public:
        TrabajadorPorHora(){
            this->sueldoPorHora = 0;
            this->numeroHorasTrab = 0;
        }
        TrabajadorPorHora(int id, string n, string a, float sh, int nht) : Trabajador(id, n, a){
            this->sueldoPorHora = sh;
            this->numeroHorasTrab = nht;
            this->sueldoMensual = sh*nht;
            this->descuentoIsr = this->sueldoMensual*0.1;
            this->totalPagar = this->sueldoMensual - this->descuentoIsr;
        }
        float getSueldoPorHora(){
            return this->sueldoPorHora;
        }
        int getNumeroHorasTrab(){
            return this->numeroHorasTrab;
        }
        int getTipoTrabajador(){
            return 2;
        }
};
#endif