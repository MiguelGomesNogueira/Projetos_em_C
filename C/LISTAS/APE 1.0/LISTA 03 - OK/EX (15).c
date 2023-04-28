#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//13) Solicite o nome completo e a idade de 5 pessoas. No final, apresente o nome da pessoa mais velha e também o
//nome da pessoa mais jovem.

int main ()
{

    int id[5];
    int x, velho=0, novo=999; 
    char nome[5][50];
    char nomevelho[50], nomenovo[50];

    for (x=0; x<5; x++)
    {
        printf("Digite seu nome: ");
        scanf("%s", &nome[x]);

        printf("Digite sua idade: ");
        scanf("%d", &id[x]);


            if (id[x] > velho)
            {
                strcpy(nomevelho, nome[x]);
                velho = id[x];
            }
            else if (id[x] < novo)
            {
                novo = id[x];
                strcpy(nomenovo,nome[x]);
            }   
    }

    printf("O nome da pessoa mais velha e: %s = %d\n", nomevelho, velho);
    printf("O nome da pessoa mais nova e: %s = %d", nomenovo, novo);


    
}