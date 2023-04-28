#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//14) Solicite uma string e apresente a frase contendo apenas o primeiro e o último
//caractere em maiúsculo, os demais deverão ser apresentados em minúsculo.

int main ()
{

    int tamanho, x;
    char palavra[50];

    printf("Digite uma frase: ");
    scanf("%s", &palavra);

    tamanho = strlen(palavra);



    for (x=0; x < tamanho; x++)
        if (x == 0 || x == tamanho -1) 
            {
                printf("%c", toupper(palavra[x]));
            }
        else if ( x == tamanho -1 )
            {
                printf("%c\n", toupper(palavra[x]));
            }
        else 
            {
                printf("%c", tolower(palavra[x]));
            }



}