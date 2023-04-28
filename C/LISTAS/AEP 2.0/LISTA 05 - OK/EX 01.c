//Leia um vetor de 10 elementos numéricos, classificá-los em ordem crescente e posteriormente
//apresente a nova ordem ao usuário;

#include<stdio.h>
#include<stdlib.h>


//----------------------------------------------------------------------------------------------
void bs(int vetor[], int tamanho){
    int i, j, aux;
        for(i=0; i<tamanho - 1; i++){
            for(j=i+1; j<tamanho; j++){
                if(vetor[i] > vetor[j]){
                    aux = vetor [i];
                    vetor [i] = vetor [j];
                    vetor [j] = aux;
                }
            }
        }
    }

//----------------------------------------------------------------------------------------------


int main (){

    int vetor[5];
    int x;

    printf("Digite 5 elementos: \n");
    for(x=0; x<5; x++){
        scanf("%d", &vetor[x]);
    }

    bs(vetor, 5);
    
    printf("\nVETOR ORGANIZADO EM ORDEM CRECENTE\n");
    for(x=0; x<5; x++){
        printf("%d ", vetor[x]);
    }

}