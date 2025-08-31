//Codigo de la semana 5


#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;
class Estudiante {
    private:
        int idEstudiante;
        string nombre;
        string apellido;
        float notaFinal;

        

    public:
        Estudiante(){
            this->idEstudiante = 0;
            this->notaFinal = 0;

        }

        Estudiante(int id, string n, string a, float nf){
            this->idEstudiante = id;
            this->nombre = n;
            this->apellido = a;
            this->notaFinal = nf;
        }

        int getIdEstudiante(){
            return this->idEstudiante;
        }

        string getNombre(){
            return this->nombre;
        }

        string getApellido(){
            return this->apellido;
        }

        float getNotaFinal(){
            return this->notaFinal;
        }



};

#endif 