#include<stdio.h>
#include<stdlib.h>

//12) Construa um algoritmo que solicite os dados dos alunos (nome, nota1 e nota2) em uma sala de aula contendo 32
//alunos. Posteriormente, apresente a média da turma e o percentual de aprovados e reprovados, considerando que a
//média mínima para aprovação é 6,0. Obs. As notas fornecidas deverão ser validadas entre 0 e 10.

#define nota_aprovado 6

char nome; 
int media, x;
int notatotal1=0, notatotal2=0; 
float aprovados=0, reprovados=0;
float n1=0, n2=0; 
float percaprovados, percreprovados;

int main ()
{

    for (x=0; x<3; x++)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome);

        do {
        printf("DIgite a primeira nota: ");
        scanf("%f", &n1);
        notatotal1 += n1;
        } while (n1 <= 0 || n1 >= 10);
            
        do {
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        notatotal2 += n2;
        } while (n2 <= 0 || n2 >= 10);
           

        media = (n1+n2)/2;
        {
            if (media >= 6 )
                {
                printf("Aprovado\n\n");
                aprovados++;
                }
            else 
                {
                printf("Reprovado\n\n");
                reprovados++;
                }
        }
    
    }   

        percaprovados = aprovados / 3 * 100.0;
        percreprovados = reprovados / 3 * 100.0; 

        printf("Media da turma: %f", (notatotal1+notatotal2)/3.0);
        printf("O percentual dos aprovados: %f",percaprovados);
        printf("O percentual dos reprovados: %f",percreprovados);
 


}