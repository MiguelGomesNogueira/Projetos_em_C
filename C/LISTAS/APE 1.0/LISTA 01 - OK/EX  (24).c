#include <stdio.h>
#include <stdlib.h>

float n1,n2,n3,result;

int main ()
{

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f",&n2);

    printf("Digite a terceira nota: ");
    scanf("%f",&n3);

    result=(n1+n2+n3)/3;

    printf("O resultado da media e: %f",result);

}