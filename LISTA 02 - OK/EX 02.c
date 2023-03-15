#include <stdio.h>
#include <stdlib.h>

float n1,n2,n3, media;

int main ()
{

    printf("Escreva a primeira nota: ");
    scanf("%f",&n1);

    printf("Escreva a segunda nota: ");
    scanf("%f",&n2);

    printf("Escreva a terceira nota: ");
    scanf("%f",&n3);

    media= (n1+n2+n3)/3;

    printf("Sua media e:\n %f",media);

    if(media>=60 )
    {
        printf("\nAPROVADO\n");
    }

    else
    {
        printf("REPROVADO");
    }

}