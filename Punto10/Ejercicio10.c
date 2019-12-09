//
// Created by Administrator on 9/12/19.
//

#include "Ejercicio10.h"

//Leer polinomio
int leerpolinomio(NODO **cabeza)
{
    int cont=1;
    char sn;

    NODO nuevo,*aux;
    aux=(*cabeza);

    do{
        printf("\nDigita coeficiente del t%crmino %d: ",130,cont+1);
        nuevo.dato=(item *) malloc (sizeof(item));
        scanf("%f",&(nuevo.dato->coe));
        fflush(stdin);

        printf("\nDigita exponente del t%crmino %d: ",130,cont+1);
        scanf("%f",&(nuevo.dato->exp));
        fflush(stdin);

        ordenar(&(*cabeza),nuevo.dato);
        mostrar((*cabeza));

        printf("Desea continuar ingresando t%crmino para el polinomio?(s/n)",130);
        sn=getchar();

        cont++;
    }while(sn!='n' || sn!='N');
}

//insertar lista
void insertar(NODO **cabeza, item *x)
{
    NODO *aux = (NODO *)malloc(sizeof(NODO));
    aux->dato = x;
    aux->siguiente = *cabeza;
    *cabeza = aux;
}

//mostrar lista
void mostrar(NODO *cabeza)
{
    if(cabeza==NULL)
        printf("\nLista vac%ca",161);

    else{
        printf("\nPolinomio: ");

        while (cabeza != NULL) {
            printf( "%2.2f",cabeza->dato->coe);
            printf( "x^%2.2f  + ",cabeza->dato->exp);
            cabeza = cabeza->siguiente;
        }
    }
}


void ordenar(NODO **cabeza,item *valor)
{
    NODO *nuevo,*atras,*otro;
    nuevo=(NODO *) malloc (sizeof(NODO));
    if(nuevo != NULL)
    {
        nuevo->dato=valor;
        nuevo->siguiente=NULL;
        atras=NULL;
        otro=*cabeza;
        while(otro != NULL && (valor->exp) < otro->dato->exp)
        {
            atras=otro;
            otro=otro->siguiente;
        }
        if(atras==NULL)
        {
            nuevo->siguiente=(*cabeza);
            *cabeza=nuevo;
        }
        else
        {
            atras->siguiente=nuevo;
            nuevo->siguiente=otro;
        }
    }
}