//
// Created by Administrator on 9/12/19.
//

int main()
{
    char contrasena[40];

    printf("Digita una contrase%ca que: \n-Por lo menos 1 letra min%cscula \n-Por lo menos 1 letra may%cscula\n-Por lo menos 1 un d%cgito [0-9]\n-El password no puede ser password, contrase%ca, clave.\n-Tama%co m%cnimo: 7 caracteres\n",164,163,163,161,164,164,161);
    scanf("%s",contrasena);

    verificar(contrasena);

    return 0;
}