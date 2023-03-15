#include<stdio.h>
#include<stdlib.h>

//2) Solicitar o nome e idade de 3 pessoas (utilize a estrutura WHILE)

int main ()
{

    int x=0;

    while (x<3)
    {

        char nome[50];
        int id;

        printf("Digite o nome: ", x);
        scanf("%s",nome);

        printf("Digite a idade: ",nome);
        scanf("%i",&id);
        x++;


    }



}