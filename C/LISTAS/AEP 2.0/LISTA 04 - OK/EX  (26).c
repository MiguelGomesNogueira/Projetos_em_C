//9.4) Gere randomicamente um vetor contendo 
//20 elementos do tipo inteiro (não repetidos) e apresente ao usuário

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{

    int v[20];
    int x;

    srand(time(NULL));

    for(x=0; x<20; x++)
    {
        v[x] = rand() % 100;
    }

    printf("Vetor gerado: \n");
    for(x=0; x<20; x++)
    {
        printf("%d \n", v[x]);
    }

}