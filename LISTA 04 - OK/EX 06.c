#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//6) Solicitar duas palavras, concatena-las em uma terceira, apresentando-a no final;

int main ()
{
    
    char pala1[50],pala2[50],final[50];

    printf("Digite a primeira palavra: ");
    scanf("%s",&pala1);

    printf("Digite a segunda palavra: ");
    scanf("%s",&pala2);

    strcpy (final,pala1);
    strcat (final,pala2);

    printf("O resultado final e: %s", final);


}