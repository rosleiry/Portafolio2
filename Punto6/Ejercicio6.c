//
// Created by Administrator on 9/12/19.
//

#include "Ejercicio6.h"

void guardar_texto(){
    FILE * pf;
    char buff[255];
    const char *ruta_archivo = "html.txt";
    int valor = 10;
    pf = fopen(ruta_archivo, "r+");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return;
    }
    fprintf(pf, "Mi texto %d", valor);
    fclose(pf);
}

void leer_texto(){
    FILE * pf;
    char buff[255];
    const char *ruta_archivo = "html.txt";
    int valor = 10;
    pf = fopen(ruta_archivo, "r+");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return;
    }
    fprintf(pf, "Mi texto %d", valor);
    fclose(pf);
}

int suma(char * ruta_archivo){
    FILE * pf;
    int n;
    int valor, suma=0;
    char buff[255];
    pf = fopen(ruta_archivo, "r+");
    if (pf == NULL){
        fgets(buff, 255, stderr);
        printf("%s", buff);
        return 0;
    }
    fscanf(pf, "%d", &n);
    for (int i = 0; i < n; ++i) {
        fscanf(pf, "%d", &valor);
        suma += valor;
    }
    fclose(pf);
    return suma;
}
