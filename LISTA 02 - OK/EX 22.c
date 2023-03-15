#include<stdio.h>
#include<stdlib.h>

//22) Construa um Programa em linguagem C que solicite dois valores inteiros e apresente a produto de um
//pelo outro sem no entanto utilizar o operador aritmético de multiplicação. Utilize o laço WHILE

int main ()
{

    int n1,n2,result=0,x=0;

    printf("Digite o primeiro valor: ");
    scanf("%i", &n1);

    printf("Digite o segundo valor: ");
    scanf("%i", &n2);

    while (x<n2)
    {
        result += n1;
        x++;
    }

    printf("O resultado final e: %i", result);    

}