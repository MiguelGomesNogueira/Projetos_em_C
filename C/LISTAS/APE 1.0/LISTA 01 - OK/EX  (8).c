#include <stdio.h>
#include <stdlib.h>

float n,result;

int main ()
{

    printf("Escreva um numero: ");
    scanf("%f",&n);
    fflush(stdin);

    result=n*0.25;

    printf("O resultado final e: %f", result);

}