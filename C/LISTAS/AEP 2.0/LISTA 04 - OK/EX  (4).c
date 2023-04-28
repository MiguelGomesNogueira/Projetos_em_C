#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1) Solicitar uma palavra e apresentar a quantidade de caracteres na mesma;

int main ()
{

    int tamanho;
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    tamanho = strlen (palavra);

    printf("A quantidade de caracteres da palavra e: %i", tamanho);

}