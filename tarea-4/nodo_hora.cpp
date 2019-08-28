#include "nodo_hora.h"

nodo_hora::nodo_hora(int dato)
{
    hora = dato;
    sig = NULL;
    primero = NULL;
}

void nodo_hora::insertar_actividad(nodo_actividad * nuevo){
     nodo_actividad * pivote = primero;

    if(pivote == NULL){
        primero = nuevo;
    }else if(primero->sig == NULL){
        primero->sig = nuevo;
        nuevo->ant = primero;
    }else{
        while(pivote != NULL){
            if(pivote->sig == NULL){
                pivote->sig = nuevo;
                nuevo->ant = pivote;
                break;
            }
            pivote = pivote->sig;
        }
    }
}
