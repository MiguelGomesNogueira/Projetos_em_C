//1.6) Solicite um valor e retorne se o mesmo é PAR ou IMPAR

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){

    int valor;

    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (valor % 2 == 0 ){
        printf("O valor e PAR.");
    }
    else{
        printf("O valor e IMPAR.");
    }

}