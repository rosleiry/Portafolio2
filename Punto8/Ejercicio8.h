//
// Created by Administrator on 9/12/19.
//

#ifndef PORTAFOLIO2_EJERCICIO8_H
#define PORTAFOLIO2_EJERCICIO8_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
 * Hacer un programa que le agregué los “MU_RUN_TEST(test_nombre);” necesarios a un archivo de minunit.
 * También debe de quitar los “MU_RUN_TEST(test_nombre);” que estén demás. Recomendación hacer varias funciones:
 * leer_archivo, obtener_test_nombres, agregar_test_nombres, eliminar_test_nombres, escribir_archivo, etc.
 * Este problema vale por 3 ejercicios. Deben de hacer mínimo 9 minunit para este punto
 */
char * agregar_mrt(char *minunit, char **palabra);
char ** eliminar_mrt(char * p);
char **comparar(char **a,char **b);
char *anadir(char *p,char *texto);
FILE* escribir_archivo(const char *minu);
FILE* leer_archivo(char *cadena);

#endif //PORTAFOLIO2_EJERCICIO8_H
