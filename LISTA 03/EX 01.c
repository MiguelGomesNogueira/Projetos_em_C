#include<stdio.h>
#include<stdlib.h>

//1) Solicitar o nome e idade de 3 pessoas (utilize a DO WHLE)


int main ()
{

    int x=0;
    do
    {
        
        char nome[50];
        int id;


        printf("Digite um nome: ",x+1);
        scanf("%s",nome);
        
        printf("Digite a idade da mesma: ",nome);
        scanf("%i",&id);


        x++;

    }
    while (x < 3);




}