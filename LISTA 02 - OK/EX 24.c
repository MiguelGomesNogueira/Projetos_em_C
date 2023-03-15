#include<stdio.h>
#include<stdlib.h>

//24) Construa um programa que solicite um valor inteiro e apresente ao usuário se o mesmo é ou não um
//número PRIMO


int main ()
{
    int n,x, primo=1;

    printf("Digite um valor: ");
    scanf("%i",&n);

    for (x=2; x < n; x++)
    {
        if (n % x == 0 )
        {
            primo = 0;
            break;
        }
            
    }

    if (primo == 1 )
    {
        printf("%i e um numero primo.\n", n);
    }
    else
    {
        printf("%i nao e um numero primo", n);
    }

    }