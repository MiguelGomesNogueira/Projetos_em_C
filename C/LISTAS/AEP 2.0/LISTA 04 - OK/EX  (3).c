//11.4) Construa um programa em linguagem C que solicite uma 
//matriz 5x4 de valores inteiros (M1) e posteriormente armazene 
//em uma segunda matriz (M2) em ordem contrária da entrada de M1

#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int m1[5][4], m2[5][4];
    int x=0, y=0; 

    printf("Digite os valores da Matriz: \n");
    for(x=0; x<5; x++){
        for(y=0; y<4; y++){
            printf("M1[%d][%d]: ", x,y);
            scanf("%d ", &m1[x][y]);
        }
    }

    for(x=4; x>=0; x--){
        for(y=3; y>=0; y--){
            m2[4-x][3-y] = m1[x][y];
        }
    }

    printf("Matriz 2 (em ordem contraria) \n");
    for(x=0; x<5; x++){
        for(y=0; y<4; y++){
            printf("%d ", m2[x][y]);
        }
        printf("\n");
    }


}