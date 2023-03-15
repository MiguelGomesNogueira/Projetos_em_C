#include<stdio.h>
#include<stdlib.h>

int mes;

int main ()
{
    printf("Digite o mes atual ( 01 a 12 ) ");
    scanf("%i", &mes);

    if (mes <1 || mes>12 )
        {
            printf("Mes ivalido...\n");
            return 0;
        }


    switch (mes)
    {
    case 1:
        printf ("Janeiro\n");
        break;
    
    case 2: 
        printf ("Fevereiro\n");
        break;

    case 3:
        printf("Março\n");
        break;

    case 4:
        printf("Abril\n");
        break;

    case 5:
        printf("Maio\n");
        break;
    
    case 6:
        printf("Junho\n");
        break;

    case 7:
        printf("Julho\n");
        break;

    case 8:
        printf("Agosto\n");
        break;

    case 9:
        printf("Stembro\n");
        break;

    case 10:    
        printf("Outubro\n");
        break;

    case 11:
        printf("Novembro\n");
        break;

    case 12:
        printf("Dezembro\n");
        break;

    default:
        printf("Numero de mes invalido.\n");
        break;
    }





}  