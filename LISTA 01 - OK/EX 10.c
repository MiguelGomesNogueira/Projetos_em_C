#include <stdio.h>
#include <stdlib.h>

float a,b,c,result;

int main()
{

    printf("Escreva o primeiro valor: ");
    scanf("%f",&a);
    fflush(stdin);

    printf("Escreva o segundo valor: ");
    scanf("%f", &b);
    fflush(stdin);

    printf("Escreva o terceiro valor: ");
    scanf("%f", &c);
    fflush(stdin);

    result=(a+b)-c;

    printf("O resultado final e: %f", result);


}