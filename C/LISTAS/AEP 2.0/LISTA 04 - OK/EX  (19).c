//12.4) Construa um programa em linguagem C que solicite um vetor de 
//6 elementos inteiros maiores ou iguais a zero (V1) e em seguida 
//preencha mais dois vetores (V2 e V3) onde V2 armazenará os elementos 
//ímpares de V1 e V3 os elementos pares também de V1

#include<stdio.h>
#include<stdlib.h>

int main () 
{

    int v1[6], v2[6], v3[6];
    int x, y=0, z=0;

    printf("Digite 6 valores inteiros: \n");
    for(x=0; x<6; x++){
        scanf("%d ", &v1[x]);
    }

    for(x=0; x<6; x++){ //verifica V2
        if (v1[x] % 2 == 1 ){
        v2[y] = v1[x];
        y++;
        }
    }

    for(x=0; x<6; x++){
        if (v1[x] % 2 == 0 ){
        v3[z] = v1[x];
        z++;
        }
    }


    printf(" VETOR 1 \n");
    for(x=0; x<6; x++){
        printf("%d ", v1[x]);
    }

    printf("\n VETOR 2 \n");
    for(x=0; x<y; x++){
        printf("%d ", v2[x]);
    }
    
    printf("\n VETOR 3 \n");
    for(x=0; x<z; x++){
        printf("%d ", v3[x]);
    }

}