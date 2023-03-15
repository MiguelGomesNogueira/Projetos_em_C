#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//11) Solicitar uma palavra (4 a 15 caracteres) e apresentar o código ASCII de cada
//caractere;

int main()
{

    char palavra[50];
    int x;

    printf("Digite uma palavra: ");
    scanf("%s",&palavra);

    int tamanho = strlen (palavra);

    if (tamanho >= 4 && tamanho <= 15)
    {
        printf("Palavra valida...\n");
    }
    else
    {
        printf("Palavra invalida...");
        return 0;
    }
    

    for (x=0; x < tamanho; x++)
        printf("%i ", palavra[x]);

}