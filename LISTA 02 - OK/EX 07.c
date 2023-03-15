#include<stdio.h>
#include<stdlib.h>

char nome,sexo;
float sal=0,id, salnovo;

int main()
{

    printf("Digite o nome do funcionario: ");
    scanf("%s",&nome);

    printf("Digite o sexo do funcionario: ");
    scanf("%s",&sexo);

    printf("Digite o a idade do mesmo: ");
    scanf("%f",&id);

    printf("Digite o salario atual dele: ");
    scanf("%f",&sal);

        if (id >= 50)
            {
                salnovo = sal * 1.35;            
            }
        
        else 
        if (sexo == 'f' && id <= 24)
            {
                salnovo = sal * 1.18;
            }

        else
        if (sexo == 'm' && id <= 27)
            {
                salnovo = sal * 1.175;
            } 

        else
        if (sexo == 'f'&& id >=25 && id<= 50)
            {
                salnovo = sal * 1.23;
            }

        else
        if (sexo == 'm' && id >=28 && id<= 38)
            {
                salnovo = sal * 1.21;
            }

        else
        if (sexo == 'm' && id >=39 && id<= 50)
            {
                salnovo = sal * 1.23;
            }       

        
    printf("O salario atualizado do funcionario e: %f", salnovo);
    
}