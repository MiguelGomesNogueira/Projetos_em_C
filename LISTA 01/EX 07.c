#include <stdio.h>
#include <stdlib.h>

float n, result;

int main ()
{

    printf("Escreva um valor: ");
    scanf("%f", &n);
    fflush(stdin);

    result= n*0.60;

    printf("O resultado final e: %f", result);


}