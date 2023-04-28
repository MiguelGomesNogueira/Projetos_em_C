#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//10) Solicitar uma palavra (5 a 10 caracteres) e apresentar cada caractere alternando em
//MAIUSCULO e MINUSCULO cada um dos caracteres;

int main ()
{
    
    char palavra[50];
    int x;

    printf("Digite uma palavra entre 5 a 10 caracteres: ");
    scanf("%s", &palavra);

    int tamanho = strlen (palavra);

    if (tamanho >= 5 && tamanho <= 10 )
    {
        printf("Palavra valida...");
        
    }
    else
    {
        printf("Palavra invalida...");
        return 0;
    }



    for (x = 0; x < tamanho; x++)
    {
        if (x % 2 == 0 )
        {
            printf("%c", toupper(palavra[x]));
        }
        else
        {
            printf("%c", tolower(palavra[x]));
        }
    }

}