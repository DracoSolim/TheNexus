//Calcular el area de un rectangulo

#include <iostream>

using namespace std;

int main(){

    float base;
    float altura;
    float area;

    cout<<"Ingrese la base de el rectangulo: "<<endl;
    cin>>base;

    cout<<"Ingrese la altura de el rectangulo"<<endl;
    cin>>altura;

    area = base * altura;

    cout<<"El area es de:"<<area<<endl;

    return 0;
}