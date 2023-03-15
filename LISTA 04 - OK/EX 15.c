#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//15) Solicite duas palavras e apresente se elas fazem parte de um ANAGRAMA

int main() {
    char palavra1[21], palavra2[21];
    printf("Digite a primeira palavra (maximo 20 caracteres): ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra (maximo 20 caracteres): ");
    scanf("%s", palavra2);
    
    int tamanho1 = strlen(palavra1);
    int tamanho2 = strlen(palavra2);
    
    if (tamanho1 != tamanho2) {
        printf("As palavras nao sao anagramas.\n");
        return 0;
    }
    
    int letras1[26] = {0}, letras2[26] = {0};
    for (int i = 0; i < tamanho1; i++) {
        letras1[palavra1[i] - 'a']++;
        letras2[palavra2[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (letras1[i] != letras2[i]) {
            printf("As palavras nao sao anagramas.\n");
            return 0;
        }
    }
    
    printf("As palavras sao anagramas.\n");
    return 0;
}