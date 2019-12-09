//
// Created by Administrator on 9/12/19.
//

#include "Ejercicio2.h"


void organiza_art (ARTICULO * art, int n){

    ARTICULO aux;

    for(int i=0; i < n-1; i++)
        for(int j=0; j < n-i-1; j++)
            if(art[j].precio > art[j+1].precio){
                aux = art[j];
                art[j] = art[j+1];
                art[j+1] = aux;
            }else if(art[j].precio == art[j+1].precio){
                if(strcmp(art[j].nombre,art[j+1].nombre) > 0){
                    aux = art[j];
                    art[j] = art[j+1];
                    art[j+1] = aux;
                }
            }
}

ARTICULO busca_id(ARTICULO * art, int n, int id){
    int i;
    for(i=0; i < n; i++){
        if(id == art[i].id)
            return art[i];
    }
}

ARTICULO busca_nombre(ARTICULO * art, int n, char * nombre){
    for(int i=0; i<n; i++ ){
        if(strcmp(nombre,art[i].nombre) == 0)
            return art[i];
    }
}
