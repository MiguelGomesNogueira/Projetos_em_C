#include<stdio.h>
#include<stdlib.h>

int n1,n2,soma; 

int main ()

{

    printf("Digite o primeiro valor: ");
    scanf("%i",&n1);
    
    if (n1 < 10 || n1 > 50)
    {
        printf("Digite o valor novamente, lembrando que tem que ser entre 10 e 50 \n");
        return 1;
    }

    printf("Digite o segundo o valor: ");
    scanf("%i",&n2);
    
    if (n2 <= n1 + 15)
    {
        printf("O valor do segundo numero precisa ser pelo menos 15 unidades a mais que o primeiro...");
        return 0;
    }

    soma= n1+n2;

    printf("O resultado final e: %i",soma);

}