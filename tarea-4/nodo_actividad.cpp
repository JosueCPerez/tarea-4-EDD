#include "nodo_actividad.h"

nodo_actividad::nodo_actividad(string act, int h)
{
    actividad = act;
    hora = h;
    sig = NULL;
    ant = NULL;
}
