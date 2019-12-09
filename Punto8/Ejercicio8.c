//
// Created by Administrator on 9/12/19.
//

#include "Ejercicio8.h"

char ** eliminar_mrt(char * p)
{
    char *ei = "MU_TEST(";
    char *ef = ")";
    int tamanoei = (int)(strlen(ei));
    char *pi,*pf;
    pi = p;
    char *result = malloc(sizeof(char));
    int tmp,c;
    c = 1;

    while((pi = strstr(pi,ei)) != NULL)
    {
        pi += tamanoei;
        pf = strstr(pf=pi,ef);
        tmp = pf - pi;

        if(pf == NULL)
        {
            break;
        }
        else if(pi != NULL)
        {
            result[c-1] = malloc((tmp+1) * sizeof(char));
            result[c-1] = strncpy(result[c-1],pi,tmp);
            result[c-1][tmp] = '\0';

            c++;
            result = realloc(result,c * sizeof(char*));
        }
    }

    return result;
}


char **comparar(char **a,char **b)
{
    char *i,*j;
    char *result = malloc(sizeof(char));
    int c =1,n;

    for(i=a;*i != NULL;i++)
    {
        n=0;
        for(j=b;*j !=NULL;j++)
        {
            if(strcmp(*i,*j)== 0)
            {
                n = 1;
                break;
            }
        }

        if(n == 0)
        {
            result[c-1] = malloc(strlen(*i) * sizeof(char));
            result[c-1] = strcpy(result[c-1],*i);
            c++;
            result = realloc(result,c * sizeof(char*));
        }
    }

    return result;
}

char * agregar_mrt(char *minunit, char **palabra)
{
    int i;
    char *ei = "MU_TEST_SUITE", *ef = "}", *ptri,*ptrf;
    ptri = minunit;
    ptri = strstr(ptri,ei);
    ptri = strstr(ptri,"{");
    ptri += 1;

    for(i= 0;i > -1;i++)
    {
        if(palabra[i] == NULL)
            break;


        ptri = anadir(ptri,palabra[i]);
    }

    return minunit;
}

char *anadir(char *p,char *texto)
{
    char *a = p;
    int i,j;
    int tamanop = (int)strlen(p);
    int tamanot = (int)strlen(texto);
    a = realloc(a,(tamanop+tamanot) * sizeof(char));

    for(i=tamanop;i<(tamanop+tamanop);i++)
    {
        for(j = i-1;j >= 0;j--)
        {
            a[j] = a[j-1];
        }
    }

    return a;
}

FILE* escribir_archivo(const char *minu)
{
    FILE * archivo;
    archivo = fopen("minunit", "wt");

    if(archivo == NULL)
    {
        return 0;
    }
    else
    {
        while(fputc(*minu,archivo) != EOF){}
    }

    fclose(archivo);
    return archivo;
}

FILE* leer_archivo(char *cadena)
{
    FILE * archivo;
    int i = 0;
    archivo = fopen("minunit", "r");

    if(archivo == NULL)
    {
        return NULL;
    }
    else
    {
        while((cadena[i] = fgetc(archivo)) != EOF) {i++;}
    }

    fclose(archivo);

    return archivo;
}