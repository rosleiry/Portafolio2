//
// Created by Administrator on 9/12/19.
//

#ifndef PORTAFOLIO2_EJERCICIO9_H
#define PORTAFOLIO2_EJERCICIO9_H

#include <stdio.h>
#include <stdlib.h>


//Re-implementar el punto 2 usando listas enlazadas.

/*2. Cree una struct para artículos de supermercados. Luego escriba una función que:

a. Organice los artículos según su precio y si el precio de dos articulos son iguales, debe de organizarlo segun su nombre.
El prototipo de la función debe de ser:
ARTICULO * organiza_art (ARTICULO *, int n);

b. Busque un artículo por id. El prototipo de la función debe de ser:
ARTICULO busca_id(ARTICULO *, int n, int id);

c. Busque un artículo por nombre. El prototipo de la función debe de ser:
ARTICULO busca_nombre(ARTICULO *, int n, char * nombre);*/

typedef int Valor;
typedef struct ARTICULO {
    Valor dato;
    struct Nodo * siguiente ;
    float precio;
    char * nombre;
    int id;
} ARTICULO ;


ARTICULO * NuevoNodo (Valor x);
void InsertarCabezaLista(ARTICULO** cabeza, Valor entrada);
void InsertarLista(ARTICULO* anterior, Valor art);
void organiza_art(NODO** art, Valor n);
ARTICULO* BuscarLista (ARTICULO* art, Valor destino);
ARTICULO* BuscarPorPosicion(ARTICULO *art, int posicion, int id);
void recorrer(ARTICULO* art, void (*procesar) (Valor v) );


#endif //PORTAFOLIO2_EJERCICIO9_H
