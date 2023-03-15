#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int n1,n2,control;

    printf("Digite o primeiro valor: ");    
    scanf("%i", &n1);

    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    if (n2<n1)
    {
        printf("Valor incorreto (o segundo valor precisar ser maior que o primeiro...)");
        return 0; 
    }

    do
    {

        printf("%i\n",n1);
        n1++;

    }
    while (n1<=n2);

}