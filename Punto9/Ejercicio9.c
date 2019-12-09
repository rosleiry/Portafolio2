//
// Created by Administrator on 9/12/19.
//

#include "Ejercicio9.h"



ARTICULO * NuevoNodo (Valor x){
    ARTICULO * nuevo_nodo = (NODO *) malloc(sizeof(NODO));
    nuevo_nodo->dato = x;
    return nuevo_nodo;
}

void InsertarLista(ARTICULO* anterior, Valor art){
    NODO * nuevo_nodo =  NuevoNodo(art);
    nuevo_nodo->siguiente = anterior->siguiente;
    anterior->siguiente = nuevo_nodo;
}



void organiza_art(NODO** art, Valor entrada){
    ARTICULO * indice;

    if ((*art)->dato > n){
        InsertarCabezaLista(art, n);
        return;
    }
    for (indice = art; indice != NULL; indice = indice->siguiente) {
        if (indice->siguiente->dato < n){
            InsertarLista(indice, n);
            return;
        }
    }
    InsertarLista(indice, n);
}



void InsertarCabezaLista(ARTICULO** cabeza, Valor entrada){
    ARTICULO * nuevo_nodo =  NuevoNodo(entrada);
    if (*art==NULL){
        *art = nuevo_nodo;
        (*art)->siguiente = NULL;
    } else{
        nuevo_nodo->siguiente = *art;
        *art = nuevo_nodo;
    }
}



ARTICULO* BuscarLista (ARTICULO* art, Valor destino){
    for (ARTICULO* indice = cabeza; indice != NULL; indice = indice->siguiente) {
        if (indice->dato == destino){
            return indice;
        }
    }
    return NULL;
}




void recorrer(ARTICULO* art, void (*procesar) (Valor v) ){
    for (ARTICULO * indice = art; indice != NULL; indice = indice->siguiente) {
        procesar(indice->dato);
    }
}
