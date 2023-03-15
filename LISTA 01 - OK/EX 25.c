#include <stdio.h>
#include <stdlib.h>

int n1,n2,n3,result;

int main ()
{

    printf("Digite o primeiro valor: ");
    scanf("%i",&n1);

    printf("Digite o segundo valor: ");
    scanf("%i",&n2);

    printf("Digite o terceiro valor: ");
    scanf("%i",&n3);

    result=n1*n2*n3;

    printf("O resultado final e: %i",result);
    
}