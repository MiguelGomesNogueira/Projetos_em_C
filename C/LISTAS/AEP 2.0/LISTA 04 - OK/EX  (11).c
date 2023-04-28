#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//8) Solicitar uma palavra e apresentá-la toda em MINUSCULA;

int main ()
{

    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s,", &palavra);


    printf("A palavra MINUSCULA e: %s", strlwr(palavra));
}