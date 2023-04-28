#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 14) Solicite os dados de 12 pessoas (nome, idade, sexo, quantidade de filhos) e posteriormente apresente:
// a) O percentual de homens
// b) A média de idade das mulheres (sem filhos)
// c) O nome e idade da pessoa mais jovem
// d) A quantidade de mulheres entrevistadas
// Obs. Todos os dados deverão ser validados na entrada

int main()
{

    int id;
    char nome[50];
    char nomeidmin[50] = "";
    char sexo;
    int qfilho, novo;
    float perchomem = 0.0;
    int idtotalmulhersemfilho = 0;
    float idademulhersemfilho = 0;
    int contmulher = 0, contmulhersemfilho = 0;
    float conthomem = 0.0;
    int idminia = 999;

    for (int x = 0; x < 2; x++)
    {
        printf("\nDigite o nome: ");
        gets(nome[x]);
        fflush(stdin);

        printf("Digite o sexo (0 = mulher, 1 = homem): ");
        scanf("%d", &sexo);
        fflush(stdin);

        printf("Qual sua idade: ");
        scanf("%d", &id);
        fflush(stdin);

        printf("Possui filhos? se sim, quantos: ");
        scanf("%d", &qfilho);
        fflush(stdin);

        if (sexo == 0)
        {
            contmulher++;
        }
        else
        {
            conthomem++;
        }

        if (qfilho == 0)
        {
            contmulhersemfilho++;
            idtotalmulhersemfilho += id;
        }

        if (id < idminia)
        {
            idminia = id;
            strcpy(nomeidmin, nome[x]);
        }
    }

    perchomem = ((conthomem / 3) * 100.0);
    idademulhersemfilho = idtotalmulhersemfilho / contmulhersemfilho;

    printf("\nPercentual dos homens: %.2f\n", perchomem);                     // ok
    printf("Media de idade mulheres sem filho: %.2f\n", idademulhersemfilho); // ok
    printf("Pessoa mais jovem: %s = %d\n", nomeidmin, idminia);
    printf("Quantidade de mulheres entrevistadas: %d\n", contmulher); // ok

    return 0;
}
