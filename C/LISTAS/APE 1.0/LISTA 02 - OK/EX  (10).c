#include<stdio.h>
#include<stdlib.h>



int main ()
{

    int n1,n2,n3,n4,n5,menor,maior;
    float media;

    printf("Digite o primeiro valor: "); 
    scanf("%i",&n1);

    printf("Digite o segundo valor: ");
    scanf("%i",&n2);

    printf("Digite o terceiro valor: ");
    scanf("%i",&n3);

    printf("Digite o quarto valor: ");
    scanf("%i",&n4);

    printf("Digite o quinta valor: ");
    scanf("%i",&n5);


    maior = n1;
    menor = n1;

    if (n2 > maior) maior = n2; 
    if (n2 < menor) menor = n2;

    if (n3 > maior) maior = n3;
    if (n3 < menor) menor = n3;

    if (n4 > maior) maior = n4;
    if (n4 < menor) menor = n4;

    if (n5 > maior) maior = n5;
    if (n5 < menor) menor = n5;

    media= (float) (n1+n2+n3+n4+n5)/5;
    
    printf("Maior %i\n",maior);
    printf("Menor %i\n",menor);
    printf("Media %f\n",media);
    
}