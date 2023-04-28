#include<stdio.h>
#include<stdlib.h>

int id1,id2;
char n1,n2;

int main ()
{

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s",&n1);

    printf("Digite a idade da primeira pessoa: ");
    scanf("%i",&id1);

    printf("Digite o nome da segunda pessoa: ");
    scanf("%s",&n2);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%i",&id2);

        if (id1>id2)
        {
            printf("A pessoa mais velha e: %s",&n1);
        }

        else 
        if (id2>id1)
        {
            printf("A pessoa mais velha e: %s",&n2);
        }

        else
        {
            printf("Os dois tem a mesma idade...");
        }
}
