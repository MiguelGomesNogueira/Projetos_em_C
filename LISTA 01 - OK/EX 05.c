#include <stdio.h>
#include <stdlib.h>

int n, result;

int main ()
{

    printf("Apresente um numero: ");
    scanf("%i", &n);
    fflush(stdin);


    result=n/2;

    printf("O valor pela metade e: %i", result);

}
