#include <stdio.h>
#include <stdlib.h>

float n1,n2,n3,n4,n5,n6,result;

int main ()
{
    
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f",&n2);

    printf("Digite a terceira nota: ");
    scanf("%f",&n3);

    printf("Digite a quarta nota: ");
    scanf("%f",&n4);

    printf("Digite a quinta nota: ");
    scanf("%f",&n5);

    printf("Digite a sexta nota: ");
    scanf("%f",&n6);

    result=n1+n2+n3+n4+n5+n6;

    printf("O resultado final e: %f",result);
}