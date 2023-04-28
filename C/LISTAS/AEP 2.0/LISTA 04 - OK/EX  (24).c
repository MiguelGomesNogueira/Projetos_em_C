//7.4) Solicite ao usuário 5 números inteiros, guarde-os em um vetor 
//e em seguida apresente-os ao usuário. Finalmente, apresente também 
//quantos elementos são negativos.

#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int v1[5];
    int x=0, menor=0;

    printf("Informe 5 numeros inteiros: \n");
    for(x=0; x<5; x++)
    {
        scanf("%d ", &v1[x]);
        if (v1[x]<0)
        {
            menor++;
            
        }
    }

    printf("O valor total de numeros negativos e: %i ", menor);

}