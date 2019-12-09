//
// Created by Administrator on 9/12/19.
//

#include "Ejercicio7.h"

char verificar(char contrasena[])
{
    int longitud,caso1,caso2,caso3,caso4,caso5,i;

    longitud=strlen(contrasena);

    if(longitud<7)//longitud menor que 7
        caso1=1;
    else
    {
        for(i=0;i<longitud;i++)
            if((contrasena[i]>=48&&contrasena[i]<=57)) //Digitos [0,9]
            {
                caso2=0;

                break;
            }
            else
                caso2=1;

        for(i=0;i<longitud;i++)
            if((contrasena[i]>=65&&contrasena[i]<=90)) //mayuscula
            {
                caso3=0;

                break;
            }
            else
                caso3=1;

        for(i=0;i<longitud;i++)
            if((contrasena[i]>=97&&contrasena[i]<=122)) //minuscula
            {
                caso4=0;

                break;
            }
            else
                caso4=1;


        if(contrasena=="contrasena"||contrasena=="password"||contrasena=="clave")
        {
            caso5=0;
        }
        else
            caso5=1;


    }

    if(caso1==1||caso2==1||caso3==1||caso4==1||caso5==1)
        printf("\nContrase%ca inv%clida\n",164,160);
    else
        printf("Contrase%ca v%clida\n",164,160);


}
