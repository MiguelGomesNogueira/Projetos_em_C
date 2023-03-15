#include<stdio.h>
#include<stdlib.h>

//25) Construa um programa que apresente todos os números PRIMOS entre 1 e 500

int main ()

{

    int x, primo, j;

    for (x=1;x<=500;x++)
        {
            primo = 1;

            for (j = 2; j < x ; j++)
            {
                if (x % j == 0)
                {
                primo = 0;  
                
                }
            }
        
         if (primo)
        {
            printf("%d ", x);
        }        
    }
        

}