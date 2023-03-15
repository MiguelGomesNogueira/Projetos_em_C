#include <stdio.h>
#include <stdlib.h>


//ler idade entre 18 e 50

int idade;

int main ()
{

     do

     {
     printf("Idade entre 18 e 50: ");
     scanf("%i",&idade);
         if  (idade <18 || idade >50);
            printf("Idade invalida\n");
     }
 
   
     while (idade <18 || idade >50);

 
     return 0;
     system ("pause");

}

