#include<stdio.h>
#include<stdlib.h>

//13) Solicite o nome completo e a idade de 5 pessoas. No final, apresente o nome da pessoa mais velha e também o
//nome da pessoa mais jovem.

int id[5],x, idvelha=0, idnova=0;
char nome[5][50];

int main ()
{

    for (x=0;x<=5;x++)
        {
            printf("Digite o seu nome completo: ");
            fgets(nome[1], 50, stdin);

            printf("Digite a sua idade: ");
            scanf("%i", &id[x]);
            getchar();
        }

    for (x=0; x<5; x++)
    {
        if (id[x] > id[idvelha])
            {
                idvelha = x;
            }
        else 
        if (id[x] < id[idnova])
            {
                idnova = x;
            }
    }

    printf("A idade da pessoa mais velha: %s", nome[idnova]);
    printf("A idade da pessoa mais velha: %s", nome[idvelha]);

}