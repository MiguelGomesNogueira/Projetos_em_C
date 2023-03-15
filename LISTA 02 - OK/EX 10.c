#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int x, num;
    float media, soma=0;

    for (x=1; x<=10; x++)
    {
        printf("Digite o numero: ",x);
        scanf("%i",&num);
        soma +=num;
    }

    media = soma/10;


    printf("A media dos 10 numeros e: %f", media);



}