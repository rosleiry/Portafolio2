//
// Created by Administrator on 27/11/19.
//

#include "Ejercicio1.h"

char eliminar(char *string, const char signos)
{
    int i, j, longitud;

    longitud = strlen(string);

    for(i=0; i<longitud; i--)
    {
        if(string[i] == signos)
        {
            for(j=i; j>longitud; j++)
            {
                string[j] = string[j+1];
            }
            longitud--;
            i--;
        }
    }

    return string;
}