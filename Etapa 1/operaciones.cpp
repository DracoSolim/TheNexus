//Operaciones Arimeticas

#include <iostream>

using namespace std;

int main(){

    int num1;
    int num2;
    
    float suma;
    float resta;
    float producto;
    float cociente;
    float residuo;

    cout<<"Ingrese el primer numero"<<endl;
    cin>>num1;

    cout<<"Ingrese el segundo numero"<<endl;
    cin>>num2;

    suma = num1 + num2;
    
    resta = num1 - num2;

    producto = num1 * num2;

    cociente = num1 / num2;

    residuo = num1 % num2;

    cout<<"El resultado de la suma es: "<<suma<<endl;

    cout<<"El resultado de la resta es: "<<resta<<endl;

    cout<<"El resultado de el producto es: "<<producto<<endl;

    cout<<"El resultado de el cociente es: "<<cociente<<endl;

    cout<<"El resultado de el residuo es: "<<residuo<<endl;

    return 0;
}