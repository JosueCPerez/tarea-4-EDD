#ifndef NODO_HORA_H
#define NODO_HORA_H
#include <iostream>
#include<stdlib.h>
#include <string>
#include "nodo_actividad.h"

using namespace std;


class nodo_hora
{
    public:
        int hora;

    nodo_hora * sig;
    nodo_actividad * primero;


        nodo_hora(int dato);
        void insertar_actividad(nodo_actividad * nuevo);

};

#endif // NODO_HORA_H
