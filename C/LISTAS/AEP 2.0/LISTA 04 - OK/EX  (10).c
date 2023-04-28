#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//7) Solicitar uma palavra e apresentá-la toda em MAIUSCULA;

int main ()
{

    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s",&palavra);

    printf("A palavra em MAIUSCULO: %s", strupr(palavra));


}