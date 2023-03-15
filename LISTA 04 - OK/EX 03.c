#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//3) Solicitar uma palavra, copiar e apresentar apenas 3 caracteres a partir do segundo
//caractere;

int main ()
{

    char palavra[50], palavra2[4];

    printf("Digite uma palavra: ");
    scanf("%s",&palavra);



    strncpy (palavra2,palavra+2,3);
    palavra2 [3] = '\0';

    printf("As 3 caracteres a parte do segundo carater e: %s", palavra2);

}