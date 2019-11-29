//
// Created by Administrator on 27/11/19.
//
#include "Ejercicio5.h"

/*
5. Hacer una función que lea un string usando memoria dinámica (No hacer minunit).
La función debe de devolver la dirección de memoria reservada
*/

int main ()
{
    char *stri;

    stri = leerstring("Escribe algo: ");
    printf("Escribiste: %s\n", stri);
    printf("Direcci%cn de memoria reservada: %p", 162, stri);

    free(stri);

    return 0;
}