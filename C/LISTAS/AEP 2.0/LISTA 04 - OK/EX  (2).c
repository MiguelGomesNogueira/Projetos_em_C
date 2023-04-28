//10.4) Construa um programa em linguagem C que solicite uma 
//matriz 5x5 de valores inteiros (M1) e apresente ao usuário.

#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int v[5][5];
    int x,y;

    printf("Digite os valores: \n");
    for (x=0; x<5; x++){
        for (y=0; y<5; y++){
            printf("v[%d][%d]: ", x,y);
            scanf("%d", &v[x][y]);
        }
    }


    printf("A matriz digitada foi: \n");
    for (x=0; x<5; x++){
        for (y=0; y<5; y++){
            printf("%d ", v[x][y]);
        }
        printf("\n");
    }

}