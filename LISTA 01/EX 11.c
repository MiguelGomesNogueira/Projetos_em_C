#include <stdio.h>
#include <stdlib.h>

float l,a,c,result;

int main ()
{

    printf("Escreva o valor de L: ");
    scanf("%f",&l);

    printf("Escreva o valor de A: ");
    scanf("%f",&a);

    printf("Escreva o valor de C: ");
    scanf("%f",&c);

    result=((l+a)*2)/c;

    printf("O resultado final e: %f", result);

}