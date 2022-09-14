//Saber si alguien paso o no

#include <iostream>

using namespace std;

//Cuerpo del programa
int main(){

    //Declaracion de variables
    int calificacion; //Almacena la calificacion de el estudiante

    //Input de variables
    cout<<"Escribe la calificacion"<<endl;
    cin>>calificacion;

    //Desicion de calificacion
    if(calificacion>=70)
    {
        cout<<"El alumno Aprobo"<<endl; //Output que indica si aprobo
    }

    else
    {
        cout<<"El alumno Reprobo"<<endl; //Output que indica si reprobo
    }

    return 0; //Regresa un valor de 0
}