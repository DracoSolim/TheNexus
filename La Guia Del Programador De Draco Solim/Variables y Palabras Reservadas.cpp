//Bienvenido a la primera entrada de la guia del programador de Draco Solim
//En donde intententare explicar de la mejor manera la manera en la que programo, y como hacer que el codigo se vea de una manera mas bonita y ordenada
//Para empezar hablare de las variables mas importantes y algunas

#include <iostream>
#include <string>

using namespace std;

int main(){
    //Variables

    //la variable integer o int almacena numeros enteros, pero no decimales, puede almacenar desde el numero -2147483647 hasta el numero 2147483647
    int test1;
    test1 = 3000;

    //la variable float almacena numeros enteros y decimales, el limite de digitos que puede tener float es casi infinito
    //en algunos lenguajes se le tiene que agregar una f al final, como por ejemplo en c#
    float test2;
    test2 = 3000.50;
    
    //la variable bool o booleano almacena un valor verdadero o falso
    bool test3;
    test3 = true;

    //la variable char almacena un caracter de cualquier tipo, aunque es un poco especial con las comillas, ya que se necesita poner '' y no ""
    char test4;
    test4 = 'a';

    //la variable string no viene directamente en c++, si no que es parte de una libreria
    //esta almacena conjuntos de caracteres en forma de oraciones, aunque no es muy usada para escribir algo ya que el cout escribe directamente una frase
    //aunque esta puede ser usada para almacenar nombres y demas
    string test5;
    test5 = "test";

    //Palabras Reservadas
    //c++ tiene ciertas palabras reservadas los cuales no pueden ser usados como variables, algunas de las mas importantes son estas
    //if, while, else, for, switch, void, case, do, return, static, namespace, typename, public, private, using, class
    //todas estas tienen su proposito, aunque la mayoria (fuera de las variables) son usadas en programas mas complejos y largos
    //tambien son usados para tener un mayor orden y para la funcion principal de c++, la programacion orientada a objetos
    //aunque la veremos en el siguiente semestre, es bueno comenzar a saber como usarla en este punto, aunque no la cubrire en esta guia
}

