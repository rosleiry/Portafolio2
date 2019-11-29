//
// Created by Administrator on 27/11/19.
//

#include "Ejercicio5.h"

char *leerstring(char *stri)
{
    char *string, buffer[100];

    printf("%s",stri);
    scanf("%s",buffer); //lee el string en el buffer

    string=(char*)malloc(strlen(buffer)+1);

    strcpy(string, buffer);

    return string;
}
