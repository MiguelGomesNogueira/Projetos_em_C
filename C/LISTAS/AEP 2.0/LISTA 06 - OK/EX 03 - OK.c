//3.6) Solicite um valor e apresente o fatorial

#include<stdio.h>
#include<stdlib.h>

int main (){

    int num, fat=1, x;

    printf("Digite um valor: ");
    scanf("%i", &num);

    for(x=1; x<=num; x++){
        fat *= x;
    }

    printf("O valor fatorado e: %i", fat);

}