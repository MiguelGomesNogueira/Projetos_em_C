//2.6) Solicite dois valores e apresente a multiplicação de um pelo outro sem usar *

#include<stdio.h>
#include<stdlib.h>

int main (){

    int v1, v2, x, mult=0;
    
    printf("Digite o primeiro valor: ");
    scanf("%i", &v1);

    printf("Digite o segundo valor: ");
    scanf("%i", &v2);

    for (x=0; x<v2; x++){
        mult += v1;
    }

    printf("O resultado final e: %i", mult);

}