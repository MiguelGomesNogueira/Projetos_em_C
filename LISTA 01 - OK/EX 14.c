#include <stdio.h>
#include <stdlib.h>

float base,altura,area;

int main ()
{

    printf("Escreva o valor da base: ");
    scanf("%f",&base);

    printf("Escreva o valor da altura: ");
    scanf("%f",&altura);

    area=(base*altura)/2;

    printf("O resultado final e: %f",area);

}