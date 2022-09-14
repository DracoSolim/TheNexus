//Costo de las carreras de un taxi

//Librerias
#include <iostream>

using namespace std;

int main(){
    
    int precio_km;
    int precio_min;
    int banderazo;

    int km_recorridos;
    int tiempo_trans;

    int precio_dist;
    int precio_tiempo;

    int total;

    cout<<"Ingrese el precio de los kilometros"<<endl;
    cin>>precio_km;

    cout<<"Ingrese el precio por minuto"<<endl;
    cin>>precio_min;

    cout<<"Ingrese el precio del banderazo"<<endl;
    cin>>banderazo;

    precio_dist = precio_km * km_recorridos;

    precio_tiempo = precio_min * precio_tiempo;

    total = banderazo + precio_dist + precio_tiempo;
    
    cout<<"Los kilometros recorridos fueron: "<<km_recorridos<<endl;
    cout<<"El tiempo transcurrido fue: "<<tiempo_trans<<endl;
    cout<<"El pago por distancia sera: "<<precio_dist<<endl;
    cout<<"El banderazo fue de: "<<banderazo<<endl;
    cout<<"El total a pagar es de: "<<total<<endl;

    return 0;
}