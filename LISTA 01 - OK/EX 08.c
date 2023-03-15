#include <stdio.h>
#include <stdlib.h>

float n1,n2,result;

int main ()
{

    printf("Escreva o primeiro valor: ");
    scanf("%f", &n1);
    fflush(stdin);
    
    printf("Escreva o segundo valor: ");
    scanf("%f",&n2);
    fflush(stdin);

    result= n1+n2*0.45;

    printf("O resultado final e: %f", result);

}