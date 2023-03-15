#include<stdio.h>
#include<stdlib.h>

float n1,n2,notasub, media;
char resp;

int main ()

{

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f",&n2);

    printf("Deseja fazer a sub? (s / n ) ");
    scanf ("%s", &resp);
        if (resp == 's' || resp == 'S')
        {
            printf("Digie a nota da sub: ");
            scanf("%f", &notasub);
            n1 = notasub;  
        }
    
    media = (n1+n2)/2;

        if (media > 6.0 )
        {
            printf("Aprovado... O resultado da sua media e: %f", media);
        }
        else
        {
            printf("Reprovado... O resultado da sua media e: %f", media);
        }


}