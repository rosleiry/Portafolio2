//
// Created by Administrator on 9/12/19.
//

#ifndef PORTAFOLIO2_EJERCICIO2_H
#define PORTAFOLIO2_EJERCICIO2_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*2. Cree una struct para artículos de supermercados. Luego escriba una función que:

a. Organice los artículos según su precio y si el precio de dos articulos son iguales, debe de organizarlo segun su nombre.
El prototipo de la función debe de ser:
ARTICULO * organiza_art (ARTICULO *, int n);

b. Busque un artículo por id. El prototipo de la función debe de ser:
ARTICULO busca_id(ARTICULO *, int n, int id);

c. Busque un artículo por nombre. El prototipo de la función debe de ser:
ARTICULO busca_nombre(ARTICULO *, int n, char * nombre);*/

typedef struct ARTICULO{
    float precio;
    char * nombre;
    int id;
}ARTICULO;

void organiza_art (ARTICULO * art, int n);
ARTICULO busca_id(ARTICULO * art, int n, int id);
ARTICULO busca_nombre(ARTICULO * art, int n, char * nombre);
#endif //PORTAFOLIO2_EJERCICIO2_H
