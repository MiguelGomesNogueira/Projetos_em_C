#include<stdio.h>
#include<stdlib.h>

//9) Apresente todos os números ímpares entre 5 e 50 (um na frente do outro) – Utilize o FOR

int main ()
{
    int x=5;

        for (x=5; x<=50; x++)
        {

        if (x % 2 != 0)
            {

            printf("%i ",x);
        
            }

        }

}