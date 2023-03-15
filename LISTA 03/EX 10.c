#include<stdio.h>
#include<stdlib.h>

//10) Solicite 10 números ao usuário. A cada número solicitado, apresente a mensagem PAR ou IMPAR e no fim,
//apresente a média dos números ímpares.



int main ()
{
    int x, num, soma=0, media=0; 
    float mediaimp;   

    for (x=1; x<=10; x++)
    {
        printf("Digite um numero: ");
        scanf("%i", &num);

        if (num%2 == 0)
        {
            printf("O numero e par...\n");
            
        }
        else 
        {
            printf ("O numero e impar...\n");
            soma += num;
            media++;
        }
    }
    
        mediaimp = soma / media;
        printf ("A media dos numeros impires e %.2f\n", mediaimp);

}