//codigo de semana6 hecho en clase
//puede tener errores ya que iba copiando rapido


#ifndef TRABAJADOR_TIEMPOCO_COMPLETO_H
#define TRABAJADOR_TIEMPO_COMPLETO_H

#include "Trabajador.h"

class TrabajadorTiempoCompleto : public Trabajador {
    private:
        float descuentoIsss;
        float descuentoAfp;

    public:

        TrabajadorTiempoCompleto() {
            this->descuentoIsss = 0;
            this->descuentoAfp = 0;
        }
        
        TrabajadorTiempoCompleto(int id, string n, string a, float sm) : Trabajador(id, n, a) {
            this->sueldoMensual = sm;
            //Calculando descuento Iss
            if(sm <= 1000){
                this->descuentoIsss = sm * 0.03;
            } else {
                this->descuentoIsss = 30;
            }
            //Calculando descuento Afp
            this->descuentoAfp = sm * 0.0725;
            //Calculando descuento Isr
            float ri=sm -this->descuentoIsss - this->descuentoAfp;
            if(ri <= 472){
                this->descuentoIsr = 0;
            } else if(ri >= 472.01 && ri <= 895.24){
                this->descuentoIsr = (ri - 472) * 0.1 + 17.67;
            } else if(ri >= 895.25 && ri <= 2038.10){
                this->descuentoIsr = (ri - 895.24) * 0.2 + 60;
            } else {
                this->descuentoIsr = (ri - 2038.10) * 0.3 + 288.57;
            }
            //Calculando total a pagar
            this->totalPagar =this->sueldoMensual -(this->descuentoIsss + this->descuentoAfp + this->descuentoIsr);
        }

        float getDescuentoIsss(){
            return descuentoIsss;
        }

        float getDescuentoAfp(){
            return descuentoAfp;
        }
         int getTipoTrabajador(){

            return 1; 
         }

};




#endif