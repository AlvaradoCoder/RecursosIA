#include <string>
using namespace std;
class Persona{
    private:
        int idPersona;
        string nombre;
        string apellido;
    public:
        Persona(){}
        Persona(int id, string n, string a){
            this->idPersona = id;
            this->nombre = n;
            this->apellido = a;
        }
        int getIdPersona(){
            return this->idPersona;
        }
        string getNombre(){
            return this->nombre;
        }
        string getApellido(){
            return this->apellido;
        }
};