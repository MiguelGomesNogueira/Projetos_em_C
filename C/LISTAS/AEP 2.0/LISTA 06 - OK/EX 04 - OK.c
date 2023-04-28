//4.6) Solicite uma frase e apresente a quantidade de palavras existentes

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){

    char frase[50];
    int tamanho;

    printf("Digite uma frase: ");
    scanf("%s", &frase);

    tamanho = strlen(frase);

    printf("O tamanho da frase e: %i", tamanho);
}