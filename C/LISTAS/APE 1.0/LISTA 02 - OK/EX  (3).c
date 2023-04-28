#include <stdio.h>
#include <stdlib.h>

int n1;

int main ()
{

    printf("Digite um valor: ");
    scanf("%i", &n1);

    if(n1 % 2 == 0)
    {
        printf("O valor digitado e um NUMERO PAR.\n");
    }
    
    else
    {
        printf("O valor digitado e um NUMERO IMPAR.\n");
    }


}