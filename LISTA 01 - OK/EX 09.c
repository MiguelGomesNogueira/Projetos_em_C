#include <stdio.h>
#include <stdlib.h>

float n1,n2,result;

int main ()
{

    printf("Escreva o primeiro valor: ");
    scanf("%f", &n1);
    fflush(stdin);

    printf("Escreva o segundo valor: ");
    scanf("%f", &n2);
    fflush(stdin);

    result=n1-n2;

    printf("O valor final e: %f", result);

}