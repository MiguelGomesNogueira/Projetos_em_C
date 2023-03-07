#include <stdio.h>
#include <stdlib.h>

float l,h,result;

int main ()
{

    printf("Escreva o valor de L: ");
    scanf("%f",&l);

    printf("Escreva o valor de H: ");
    scanf("%f",&h);

    result=(l*l)*(h/3);

    printf("O resultado final e: %f",result);

}