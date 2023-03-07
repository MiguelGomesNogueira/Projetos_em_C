#include <stdio.h>
#include <stdlib.h>

float r,r2,result;

int main ()
{

    printf("Escreva o valor de R: ");
    scanf("%f",&r);

    r2=r*r*r;
    result=(1.3333*3.1416)*r2;
    
    printf("O resultado final e: %f",result);

}
    