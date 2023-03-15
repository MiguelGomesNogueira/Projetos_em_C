#include <stdio.h>
#include <stdlib.h>

float r2,r,result;

int main ()
{

    printf("Escreva o valor de R: ");
    scanf("%f",&r);

    r2= r*r;
    result= 3.1416*r2;

    printf("O resultado final e: %f", result);


}