#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//4) Solicite uma palavra com no mínimo 5 caracteres e apresente apenas os 3 últimos;

int main()
{

    char palavra[6], copia[50];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);


    strncpy (copia,palavra+3,3);
    copia[3] = '\0';

    printf("As tres ultimas caracteres e: %s", copia);
}