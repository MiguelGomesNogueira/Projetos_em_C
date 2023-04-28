#include<stdio.h>
#include<stdlib.h>

//19) A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um
//Programa em linguagem C que receba um valor de uma compra e mostre o valor das prestações


int main ()
{

    int valor, prest;

    printf("Digite o valor da sua compra: ");
    scanf("%i", &valor);

    prest = valor /5;

    printf("O valor de cada uma das 5 prestacoes e: %i",prest);

}