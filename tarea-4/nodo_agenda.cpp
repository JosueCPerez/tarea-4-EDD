#include "nodo_agenda.h"

nodo_agenda::nodo_agenda()
{
    dias = new lista_simple();
    hora = new lista_simple();

}

void nodo_agenda::insertar_actividad(int hora_actividad, string dia, string actividad){
    nodo_actividad * nuevo = new nodo_actividad(actividad,hora_actividad);

    dias->insertar(dia,nuevo);
    hora->insertar_hora(hora_actividad,nuevo);

}
