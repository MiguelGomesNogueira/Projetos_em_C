#include <stdio.h>
#include <stdlib.h>

int n, result;

int main ()
{

    printf("Apresente um numero: ");
    scanf("%i", &n);
    fflush(stdin);

    result= n*3;

    printf("O triplo do resultado e: %i", result);

}