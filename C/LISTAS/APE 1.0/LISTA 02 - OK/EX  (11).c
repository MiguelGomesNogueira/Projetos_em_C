#include<stdio.h>
#include<stdlib.h>

int numero;

int main ()
{

    printf("Digite um valor: ");
    scanf("%i",&numero);

    if (numero>=50 && numero<=100)
    {
        printf("O valor esta entre 50 e 100.\n");
    }

    else 
    {
        printf("O numero digitado nao esta entre 50 e 100");
    }
}
