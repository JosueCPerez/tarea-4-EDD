#ifndef NODO_DIA_H
#define NODO_DIA_H
#include <iostream>
#include<stdlib.h>
#include <string>
#include "nodo_actividad.cpp"

using namespace std;

class nodo_dia
{
    public:
    string dia;
    int indice_dia;

    nodo_dia * sig;
    nodo_actividad * primero;


        nodo_dia(string dato);
        void insertar_actividad(nodo_actividad * nuevo);

};

#endif // NODO_DIA_H
