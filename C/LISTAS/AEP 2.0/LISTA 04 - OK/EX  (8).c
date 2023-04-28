#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//5) Solicitar uma palavra e apresentá-la na vertical (cada caractere será uma linha);

int main ()
{

    char palavra[50];
    int x, tamanho;

    printf("Digite uma palavra: ");
    scanf("%s",&palavra);

    tamanho = strlen (palavra);
 
    for (x=0; x < tamanho; x++)
        {
            printf("%c\n", palavra[x]);
        }

}