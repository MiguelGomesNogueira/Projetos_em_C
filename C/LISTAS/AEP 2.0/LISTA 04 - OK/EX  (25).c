//8.4) Gere randomicamente um vetor contendo 14 elementos do tipo inteiro e apresente ao usuário

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{

    int v[14];
    int x;

    srand(time(NULL));

    for(x=0; x<14; x++)
    {
        v[x] = rand () % 100;
    }

    printf("Vetor Gerado: ");
    for(x=0; x<14; x++)
    {
        printf("%d \n", v[x]);
    }


}