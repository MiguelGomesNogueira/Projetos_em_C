#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//2) Solicite uma palavra e apresente os 4 primeiros caracteres;


int main ()
{

    char palavra[50], palavra2[4];
    
    printf("Digite uma palavra: ");
    scanf("%s",&palavra);

    strncpy (palavra2, palavra, 4);
    palavra2[4] = '\0';

    printf("As 4 primeiras caracteres e: %s", palavra2);

}