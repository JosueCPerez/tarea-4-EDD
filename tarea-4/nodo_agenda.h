#ifndef NODO_AGENDA_H
#define NODO_AGENDA_H
#include <iostream>
#include<stdlib.h>
#include "lista_simple.cpp"


using namespace std;

class nodo_agenda
{
    public:
        lista_simple * dias;
        lista_simple * hora;
        nodo_agenda();

        void insertar_actividad(int hora, string dia, string actividad);

    protected:

    private:
};

#endif // NODO_AGENDA_H
