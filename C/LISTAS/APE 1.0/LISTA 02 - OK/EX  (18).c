#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int n1,n2,x;

    printf("Digite o primeiro valor: ");
    scanf("%i",&n1);


    printf("Digite o segundo valor: ");
    scanf("%i",&n2);

    if (n1>n2)
    {
        printf("Valor incorreto (o segundo valor precisa ser maior que o primeiro...)");
        return 0; 
    }

    for (x=n1;x<=n2;x++)
    {  
        printf("%i\n",x);
    }




}