#include <stdio.h>
#include <stdlib.h>

float l1,l2,l3,result;

int main ()
{

    printf("Escreva o valor de L1:  ");
    scanf("%f",&l1);

    printf("Escreva o valor de L2: ");
    scanf("%f",&l2);

    printf("Escerva o valor de L3: ");
    scanf("%f",&l3);

    result= l1*l2*l3;

    printf("O resultado final e: %f", result);

}