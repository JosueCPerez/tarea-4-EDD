#include <iostream>
#include<stdlib.h>
#include "nodo_agenda.cpp"
using namespace std;

int main()
{
    //lista_simple * lista = new lista_simple();
    nodo_agenda * agenda = new nodo_agenda();
    int opciones =0;
    string dia="";
    string actividad="";
    int hora=0;
    cout << "AGENDA DE ACTIVIDADES" << endl;
    while(opciones !=4){
            cout << "  " << endl;
        cout << "1. insertar actividad" << endl;
        cout << "2. ver agenda por dia" << endl;
        cout << "3. ver agenda por hora" << endl;
        cout << "4. salir" << endl;
        cin >> opciones;

        if(opciones == 1){
            dia="";
            actividad="";
            cout << "  " << endl;
            cout << " -ingrese el dia" << endl;
            cin >> dia;
            cout << " -ingrese la hora (numero entero)" << endl;
            cin >> hora;
            cout << "  -ingrese la actividad (sin espacios en blanco)" << endl;
            cin >> actividad;
            //lista->insertar(dia,actividad);
            agenda->insertar_actividad(hora,dia,actividad);
            dia="";
            actividad="";
        }else if(opciones == 2){
            cout << "  " << endl;
            agenda->dias->imprimir_valores();
        }else if(opciones == 3){
            cout << "  " << endl;
            agenda->hora->imprimir_valores_porHora();
        }else{
            break;
        }
    }
cout << "  " << endl;
    return 0;
}
