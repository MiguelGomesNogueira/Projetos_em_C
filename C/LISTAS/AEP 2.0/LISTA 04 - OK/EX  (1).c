#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//16) Solicite uma palavra (mínimo 3 caracteres) e apresente se a mesma é um
//palíndromo:

int main ()
{

    char palavra[4];
    int x, tamanho;

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    tamanho = strlen (palavra);

    for (x=0; x < tamanho/2; x++)
    {
        if (palavra[x] != palavra [tamanho -1 - x ])
            {
                printf("A palavra nao e uma palindromo.");
                return 0;
            }
    }    

    printf("A palavra e um palindromo.");
    
}