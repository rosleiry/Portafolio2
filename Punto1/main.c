//
// Created by Administrator on 9/12/19.
//

int main()
{
    char *string, *copia;

    copia=string;

    printf("Ingrese una cadena de texto: ");
    gets(string);

    printf("\nResultado: %s", eliminar_string(copia));

    return 0;
}

/*Versiones anterior #1
int main()
{
    char string[MAX],copia[MAX];
    int i=0,j=0,posicion,longitud;

    printf("Ingrese una cadena de texto: ");
    gets(string);

    printf("\nIngrese la posici%cn desde la cual se va a remover.\n(iniciando desde la posicion 0 del caracter en el arreglo): ",162);
    scanf("%d",&posicion);
    printf("Ingrese la longitud de lo que se va a remover: ");
    scanf("%d",&longitud);

    i=posicion;

    do{
        copia[j]=string[i];
        j++;i++;longitud--;
    }while(string[i]!='\0' && longitud>=0);

    copia[j]='\0';
    printf("Resultado: %s",copia);

    return 0;
}

 */

/*Version anterior #2

void eliminar(char *string, const char signos);

int main()
{
    char string[MAX];
    char signos;

    printf("Escribe varias oraciones separadas por:. : ;): ");
    gets(string);

    substr[MAX]=string[MAX];

    printf("Ingresa el primer signo despues del cual vas a remover: (. : ;)");
    signos = getchar();

    eliminar(string, signos);

    printf("String ahora: %s", string);

    return 0;
}

void eliminar(char *string, const char signos)
{
    int i, j, longitud;

    longitud = strlen(string);

    for(i=0; i<longitud; i++)
    {
        if(string[i] == signos)
        {
            for(j=i; j>longitud; j++)
            {
                string[j] = string[j+1];
            }
            longitud++;
            i--;
        }
    }
}
*/
