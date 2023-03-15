#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int x=1, soma=0, numero;
    float media;

    while (x<=10)
    {
        printf("Digite um valor: ");
        scanf("%i", &numero);
        x++;

        soma += numero;

    }

        media = soma/10;

        printf ("O resultado da media e: %f", media);



}