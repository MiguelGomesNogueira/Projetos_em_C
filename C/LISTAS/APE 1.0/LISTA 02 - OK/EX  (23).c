#include<stdio.h>
#include<stdlib.h>

//21) Construa um Programa em linguagem C que solicite dois valores inteiros e apresente a produto de um
//pelo outro sem no entanto utilizar o operador aritmético de multiplicação. Utilize o laço DO WHILE

int main ()
{

    int n1,n2, result=0, x=0; 

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);

    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    do 
    {
        result += n1;
            x++; 

    }

    while (x<n2);

    printf("O resultado final e: %i", result);

}