#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//9) Solicitar uma palavra e apresentá-la em ordem inversa. (ex. AMOR = ROMA);

int main ()
{

    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s",&palavra);

    int tamanho = strlen (palavra);

    printf("A palavra invertida e: ");
    for (int x=tamanho -1 ; x >= 0; x--)
    {
        printf("%c", palavra[x]);
    }

}