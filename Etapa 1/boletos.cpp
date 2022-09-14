//Compra de Boletos

#include <iostream>

using namespace std;

//Cuerpo del programa
int main(){
    //Declaracion de variables
    int boletos; //Cantidad de Boletos
    int costo_boletos; //Costo de los boletos

    cout<<"Ingrese el numero de boletos"<<endl;
    cin>>boletos;

    cout<<"ingrese el costo de los boletos"<<endl;
    cin>>costo_boletos;

    if (boletos>5)
    {
        costo_boletos = costo_boletos * 0.1;
    }
    
    cout<<"El costo de los boletos es de "<<costo_boletos<<endl;

    return 0;
}
