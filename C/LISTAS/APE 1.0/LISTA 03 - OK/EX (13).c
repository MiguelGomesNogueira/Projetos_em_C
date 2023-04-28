#include<stdio.h>
#include<stdlib.h>

//11) Solicite ao usuário o nome, idade e sexo (F/M) de algumas pessoas. A cada entrevista, o sistema deverá 
//perguntar se o usuário deseja continuar a informar dados, e caso não queira, apresente a média de idade das 
//mulheres.

int id, somaidm=0, quantidadem;
char nome, sexo, resposta;
float media;

int main ()
{

    do
    {
        printf("\nDigite o seu nome: ");
        scanf("%s", &nome);

        printf("Digite a sua idade: ");
        scanf("%i", &id);

        printf("Digite seu sexo: ");
        scanf("%s", &sexo);
            if (sexo == 'f')
            {
                somaidm += id;
                quantidadem++;
            }

        printf ("Deseja continuar a entrevista? (s / n )");
        scanf("%s", &resposta);
    }
    while (resposta == 's' || resposta == "S");
         
    media = somaidm / quantidadem;

    printf("A media das mulheres e: %f", media);
    
    

}