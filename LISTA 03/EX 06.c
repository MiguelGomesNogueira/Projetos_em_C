#include<stdio.h>
#include<stdlib.h>

//6) Solicite o nome, idade e sexo de uma pessoa. Valide o sexo entre (“F” / “M”) idade entre 10 e 100 anos

int id;
char nome, sexo;

int main ()

{
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite a sua idade: ");
    scanf("%i", &id);
        if (id<10 || id>100)
        {
            printf("Idade incorreta...\n");
            return 0; 
        }

    printf("Digite o seu sexo (F / M): ");
    scanf("%s", &sexo);
        if (sexo == 'F' || sexo == 'M' )
        {
            printf("Sexo valido...");
        }
        else 
        {
            printf("Sexo invalido...");
            return 0;
        }

}