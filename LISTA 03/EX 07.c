#include<stdio.h>
#include<stdlib.h>

//7) Solicite 15 número (entre 10 e 50) e apresente posteriormente a média

int main ()
{
    int x; 
    float media;
    int soma=0, n;

    for (x=1;x<=15;++x)
    {
        
         printf("Digite um numero: ",x);
         
         scanf("%i",&n);
         if (n<10 || n>50)
         {
            printf("Numero digitado incorretamente...\n");
         }
         soma +=n;


    }
    
    media= soma/15;

    printf("O a media do valor total e: %f", media);

} 