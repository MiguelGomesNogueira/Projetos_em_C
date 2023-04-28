#include<stdio.h>
#include<stdlib.h>

int n1,n2;

int main ()
{

    printf("Digite o primeiro valor: ");
    scanf("%i",&n1);

    printf("Digite o segundo valor: ");
    scanf("%i",&n2);

    if (n1>n2)
    {
        printf("O primeiro valor e maior que o segundo\n");
    }
    
    else if (n2>n1)
    {
        printf("O segundo valor e maior que o primeiro\n");
    }

    else
    {
        printf("Os valores sao iguais\n");
    }

}