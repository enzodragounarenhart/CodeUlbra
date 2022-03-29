#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    
    int quantFun, salFunc[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, salFuncNew[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, salTemp;


    printf("Digite a quantidade de funcionarios da empresa(maximo 20): ");
    scanf("%d%*c",&quantFun);

    printf("Escreva o salario de cada funcionario: ");

    for (int i = 0; i < quantFun; i++)
    {
        scanf("%d%*c",&salTemp);
        if (salTemp>0)
        {
            salFunc[i] = salTemp;
            printf("SalFunc(%i)%d\n",i,salFunc[i]);
        }
        
    }

    for (int i = 0; i < quantFun; i++)
    {
        if (salFunc[i] > 0)
        {
            if (salFunc[i] < 499){

                salFuncNew[i] = (salFunc[i]*1.05) + 150;

            }else if (salFunc[i] >= 500 && salFunc[i] <= 1200){

                salFuncNew[i] = (salFunc[i] * 1.12) + 100;

            }else if (salFunc[i] > 1200){

                salFuncNew[i] = salFunc[i] + 100;

            }
            
        }
        
    }
    for (int i = 0; i < quantFun; i++)
    {
        printf("Salario com bonificacao do funcionario N%i: %d\n",i+1,salFuncNew[i]);
    }
    
    printf("Pressione qualquer tecla para sair.");
    getch();
    

    return 0;
}
