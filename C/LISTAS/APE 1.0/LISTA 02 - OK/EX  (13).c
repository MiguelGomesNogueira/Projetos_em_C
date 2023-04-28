#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int x=0, soma=0, numer;
    float media; 

    do 
    {
        printf("Digite um valor: ");
        scanf("%i",&numer);

        soma += numer;

        //o x é o que controla o laço (quantidade de vezes que ele vai repitir) 
        x++;
    
    }
    while (x < 10);

    media = soma/10;

    printf("O valor final da media e: %f", media);

}