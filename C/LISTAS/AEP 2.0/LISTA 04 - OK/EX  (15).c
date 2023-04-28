#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//12) Solicitar uma palavra (3 a 20 caracteres) e apresentar cada um dos caracteres
//adicionando o valor 10 ao código ASCII;

int main ()
{

    char palavra [50];
    int x, tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    tamanho = strlen (palavra);

    if (tamanho >= 3 && tamanho <= 20)
    {
        printf("Palavra valida\n");
    }
    else
    {
        printf("Palavra invalida");
        return 0;
    }

    for (x=0; x<tamanho ; x++)
    {
        printf("%c ", palavra[x]+10);
    }

}