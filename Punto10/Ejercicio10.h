//
// Created by Administrator on 9/12/19.
//

#ifndef PORTAFOLIO2_EJERCICIO10_H
#define PORTAFOLIO2_EJERCICIO10_H
#include <stdio.h>
#include <stdlib.h>

typedef struct NODO{
    item *dato;
    struct NODO *siguiente;
}NODO;

typedef struct TERMINO{
    float coe;
    float exp;
}TERMINO;

int leerpolinomio(NODO **cabeza);
void insertar(NODO **cabeza, item *x);
void mostrar(NODO *primero);
void ordenar(NODO **cabeza,item *valor);
#endif //PORTAFOLIO2_EJERCICIO10_H
