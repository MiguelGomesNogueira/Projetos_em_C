//6.4) Faça um programa em linguagem C que Leia um vetor (V1) de 10 elementos numéricos e 
//preencha um outro (V2) contendo em cada célula o dobro de V1, e em seguida um terceiro 
//vetor (V3) contendo em cada célula a metade de V1.

#include<stdio.h>
#include<stdlib.h>

int main (){

    int v1[3], v2[3], v3[3];
    int x;

    printf("Digite o valor de V1: \n"); //salva o valor, dentro do vetor 
    for (x=0; x<3; x++)
    {
        scanf("%d", &v1[x]);
    }


    printf(" VETOR 01: ");
    for (x=0; x<3; x++) //apresente v1
    {
        printf("%d", v1[x]);
    }
    
    printf(" VETOR 02: ");
    for (x=0; x<3; x++) //apresente v2
    {
        printf("%d", v1[x]*2);
        v2[x] = v1[x]; 
    }

    printf(" VETOR 03: ");
    for (x=0; x<3; x++) //apresente v3
    {
        printf("%d", v1[x]/2);
        v3[x] = v1[x];
    }

}