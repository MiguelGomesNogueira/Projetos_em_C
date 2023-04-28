#include<stdio.h>
#include<stdlib.h>

//15) Crie um algoritmo chamado Zodíaco. Este algoritmo deve solicitar parcialmente a data de nascimento (dia e mês) e
//apresentar o seu signo, conforme tabela abaixo:

//- 1 o signo do zodíaco: Aquário (21/jan a 19/fev)
//- 2o signo do zodíaco: Peixes (20/fev a 20/mar)
//- 3o signo do zodíaco: Áries (21/mar a 20/abr)
//- 4o signo do zodíaco: Touro (21/abr a 20/mai)
//- 5o signo do zodíaco: Gêmeos (21/mai a 20/jun)
//- 6o signo do zodíaco: Câncer (21/jun a 21/jul)
//- 7o signo do zodíaco: Leão (22/jul a 22/ago)
//- 8o signo do zodíaco: Virgem (23/ago a 22/set)
//- 9o signo do zodíaco: Libra (23/set a 22/out)
//- 10o signo do zodíaco: Escorpião (23/out a 21/nov)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
//- 11o signo do zodíaco: Sagitário (22/nov a 21/dez)
//- 12o signo do zodíaco: Capricórnio (22/dez a 20/jan)
//No final, pergunte ao usuário se ele deseja continuar (S ou N)

int main ()
{

    int data, mes;
    char continuar = 's';


    while (continuar == 's')
    {
    
    printf("Digite seu dia de nascimento: ");
    scanf("%d", &data);

    printf("Digite seu mes de nascimento: ");
    scanf("%d", &mes);

    if ((data>= 21 && mes == 1) || (data <=19 && mes == 2))
        {  
            printf("Aquario\n");
        }

    else if ((data>= 20 && mes == 2) || (data <= 20 && mes == 3))
        {
            printf("Peixes\n");
        }
    else if ((data>= 21 && mes == 3) || (data <= 20 && mes == 4))
        {
            printf("Aries\n");
        }
    else if ((data>= 21 && mes == 4) || (data <= 20 && mes == 5))
        {
            printf("Touro\n");
        }
    else if ((data>= 21 && mes == 5) || (data <= 20 && mes == 6))
        {
            printf("Gemeos\n");
        }
    else if ((data>= 21 && mes == 6) || (data <= 21 && mes == 7))
        {
            printf("Cancer\n");
        }
    else if ((data>=22 && mes == 7) || (data <= 22 && mes == 8))
        {
            printf("Leao\n");
        }
    else if ((data>=23 && mes == 8) || (data <= 22 && mes == 9))
        {
            printf("Virgem\n");
        }
    else if ((data>= 23 && mes == 9) || (data<= 22 && mes == 10))
        {
            printf("Libra\n");
        }
    else if ((data>= 23 && mes == 10) || (data<= 21 && mes == 11))
        {
            printf("Escorpiao");
        }
    else if ((data>=22 && mes == 11) || (data<= 21 && mes == 12))
        {
            printf("Sagitario");
        }
    else 
        {
            printf("Capricornio");
        }


        printf("Deseja continuar? (s / n) ");
        scanf("%s", &continuar);
         
    }
}