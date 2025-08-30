#include <iostream>
using namespace std;
#include <list>
void Cambiar(int arreglo[]){
    arreglo[0] = 20;
}

int main(){
    int x[2] = {1,2};
    Cambiar(x);
    cout << x[3] << endl;

    //int *p = x;
    //p = p + 1;
    //cout << "Valor de p : " << p[0] << endl;
    //cout << "Valor de p : " << *p << endl;
    return 0;
}