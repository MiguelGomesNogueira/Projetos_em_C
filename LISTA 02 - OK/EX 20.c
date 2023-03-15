#include<stdio.h>
#include<stdlib.h>

//20) Construa um Programa em linguagem C que solicite dois valores inteiros e apresente a produto de um
//pelo outro sem no entanto utilizar o operador aritmético de multiplicação. Utilize o laço FOR

int main ()
{

    int x, n1, n2, result=0;  

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);
    
    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    for (x=0; x<n2; x++)
    {
        result += n1;
    }

        printf("O valor final e: %i", result);

    }