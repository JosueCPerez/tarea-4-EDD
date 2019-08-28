#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H
#include "nodo_dia.cpp"
#include "nodo_hora.cpp"

class lista_simple
{
    nodo_dia * primero;
    nodo_hora * primero_h;

    public:
        lista_simple();
        void insertar(string dia , nodo_actividad * actividad);
        void insertar_hora(int hora , nodo_actividad * actividad);
        void imprimir_valores();
        void imprimir_valores_porHora();


};

#endif // LISTA_SIMPLE_H
