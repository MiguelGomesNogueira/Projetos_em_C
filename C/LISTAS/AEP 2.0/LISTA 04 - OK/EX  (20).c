//1.4) Construir programa em linguagem C que Leia um 
//vetor de 10 elementos e posteriormente apresente a soma dos mesmos;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
int vetor [10];
int x, soma=0;

    printf("Digite 10 numero: \n");
        for (x=0; x<10; x++)
            {
                scanf("%i ", &vetor[x]);
                soma += vetor[x];
            }

    printf("a soma do vetor e: %i", soma);

}