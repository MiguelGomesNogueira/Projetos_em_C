#include <stdio.h>
#include <stdlib.h>

float r,r2,h,result;

int main ()
{

    printf("Escreva o valor de R: ");
    scanf("%f",&r);

    printf("Escreva o valor de H: ");
    scanf("%f",&h);

    r2=r*r;
    result= ((3.1416*r2)/3)*h;

    printf("O resultado final  e: %f", result);


}