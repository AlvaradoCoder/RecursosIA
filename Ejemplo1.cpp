#include <iostream>
using namespace std;

void Cambiar(int *p){
    *p = 20;
}
int main(){
    int x=10;
    Cambiar(&x);
    cout << "Valor de X : " << x << endl;
    return 0;
}