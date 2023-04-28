// 3.4) Elaborar um programa em linguagem C que solicite e armazene em 
// um vetor as idades de 7 pessoas. Posteriormente apresente a Média das Idades;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{

int vetor[7];
int x, soma=0, media;

    printf("Digite a idade das pessoas: \n");
    for (x=1; x<=7; x++)
    {
        scanf("%d ", &vetor[x]);
        soma += vetor[x];
    }

    media = soma/7;

    printf("A media e: %i ", media);


}