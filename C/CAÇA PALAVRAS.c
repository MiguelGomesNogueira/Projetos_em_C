// AVALIAÇÃO PRÁTICA - Valor 3,0

//- sortear uma matriz 25 X 25 contendo letras do alfabeto ------- (OK)
//- ler o arquivo de palavras e sortear uma palavra ------- (OK)
//- inserir palavra aleatoriamente na tabela (a ordem também deve ser aleatoria) ------- (OK)
//- apresentar a matriz ------- (OK)
//- solicitar ao usuário uma palavra ------- (OK)
//- informar ao usuário caso a palavra digitada esteja na matriz ------- (OK)
// (independente de ter sido a sorteada e inserida na tabela ou não)

// obs. A proporção para sorteio dos caracteres na matriz deverá ser 2:3, ou seja,
// para cada 3 caracteres sorteados, 2 deles deverão ser vogais 1 consoante

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int x, y;
int pala;
char palavra[200][20];
char palavra_sorteada[100];
char matriz[25][25];
char palavra_usuario[50]; 

//-------------------------------------------------------------------------
void cria_matriz()
{
    char alfabeto[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, j;
    srand(time(NULL)); // números aleatórios

    for (i = 0; i < 25; i++)
    {
        for (j = 0; j < 25; j++)
        {
            matriz[i][j] = alfabeto[rand() % 26];
        } // gera os  números aleatórios dentro do programa
    }
}

//-------------------------------------------------------------------------
void mostra_matriz()
{

    int i, j;

    // exibe a matriz
    for (i = 0; i < 25; i++)
    {
        for (j = 0; j < 25; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

//-------------------------------------------------------------------------
void sorteio()
{
    FILE *arq;
    srand(time(NULL));


    arq = fopen("palavra.txt", "r");
    if (arq == NULL)
    {
        printf("\nArquivo nao encontrado...\n");
    }
    

    int num_pala = 0;

    // armazeno no vetor

    while (!feof(arq))
    {
        // fgets(string,tamanho,arquivo)
        fgets(palavra[num_pala], 20, arq);
        palavra[num_pala][strlen(palavra[num_pala]) - 1] = '\0';
        num_pala++;
    }

    fclose(arq);
}

//-------------------------------------------------------------------------
void inserir_palavra(int x, int y)
{
    
    x = rand() % 25;
    y = rand() % (25 - strlen(palavra_sorteada) + 1);

    int len = strlen(palavra_sorteada);
    int i;

    printf("\nAs coordenadas sao - X:%d, Y:%d\n", x,y);

    for (i = 0; i < strlen(palavra_sorteada); i++)
    {
        matriz[x][y + i] = palavra_sorteada[i];
    }
    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            printf("%c ", matriz[i][j]);
        }
    printf("\n");
    }
}

//-------------------------------------------------------------------------
void verificar_palavra_tabela (){

    int x; 
    int tamanho = strlen(palavra_usuario);
    int encontrado = 0;

    for(x=0; x<25; x++){
        for(y=0; y<25; y++){
            if(matriz[x][y] == palavra_usuario[0]){
                int k;
                for(k=1; k<tamanho; k++){
                    if(x<25 && y<25 && matriz[x][y+k]==palavra_usuario[k]){
                        continue;
                    }
                    else {
                        break;
                    }
                }
            if (k== tamanho){
                encontrado=1;
                }
            }
        }
    }

    if (encontrado){
        printf("A palavra esta presente na matriz..\n");
    }
    else{
        printf("A palavra nao esta presente na matriz...\n");
    }
    
}
//-------------------------------------------------------------------------


int main()
{
    
    cria_matriz(matriz);
    mostra_matriz(matriz);
    sorteio();

    system("cls");

    strcpy(palavra_sorteada,palavra[rand()%100]);
    printf("\nA palavra sorteada foi: %s", palavra_sorteada);

    inserir_palavra(x,y);

    printf("\nDigite uma palavra: ");
    scanf("\n%c\n", &palavra_usuario);

    verificar_palavra_tabela();

}
