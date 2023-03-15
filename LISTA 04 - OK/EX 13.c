#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//13) Solicitar uma palavra (4 a 12 caracteres) e apresentar cada um dos caracteres
//adicionando o valor 20 ao código ASCII e também a posição do caractere na
//palavra;

int main ()
{

    int x, tamanho;
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    tamanho = strlen (palavra);

        if (tamanho >= 4 && tamanho <= 12)
        {
            printf("Palavra valida\n");
        }
        else 
        {
            printf("Palava invalida");
            return 0;
        }


    for (x=0; x < tamanho; x++)
        {
            printf("%c - %c\n", palavra[x], palavra [x] + 20);
        }


}