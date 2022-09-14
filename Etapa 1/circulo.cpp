//Calcular el area de un circulo

#include <iostream>

using namespace std;

int main(){
    
    float pi;
    pi = 3.1416;

    float radio;
    float area_circulo;
    float diametro;

    cout<<"Indique el radio: "<<endl;
    cin>>radio;

    diametro = radio * radio;
    area_circulo = diametro * pi;

    cout<<"El area de el circulo es de: "<<area_circulo<<endl;
    
    return 0;
}