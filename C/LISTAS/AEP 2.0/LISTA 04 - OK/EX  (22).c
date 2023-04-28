//5.4) Construir um programa em linguagem C que Leia um vetor 
//de 8 elementos (V1) e preencha um outro (V2) em ordem inversa;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main ()
{

    int v1[8], v2[8];
    int x=0, y=0;

        printf("Digite os valores do V1: \n");
        for (x=1; x<8; x++)
            {
                scanf("%d ", &v1[x]);
            }


        for (x=7; x>0; x--)
        {
            v2[y] = v1[x];
            y++;
        }

    printf("\n VETOR 01: ");
    for(x=1; x<8; x++)
    {
        printf("%d ", v1[x]);
    }

    printf("\n VETOR 02: ");
    for (x=1; x<8; x++)
    {
        printf("%d ", v2[x]);
    }

}