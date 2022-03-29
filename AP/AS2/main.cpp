#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char nomesEx5[5][20], nomeConsultaEx5[20], nomesEx3[5][20];
    int vetorEx4[10], vetorBackEx4[10], x4 = 0, notasEx3[5], somaEx3 = 0, mediaEx3 = 0, int notasEx2[20], mediaEx2, somaEx2 = 0, tempEx2, quantFun, salFunc[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, salFuncNew[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, salTemp;


    int op = 0;
    do{
        printf("\n----------MENU----------\n");
       printf("1 - Fazer Exercicio 1 \n");
       printf("2 - Fazer Exercicio 2 \n");
       printf("3 - Fazer Exercicio 3 \n");
       printf("4 - Fazer Exercicio 4 \n");
       printf("5 - Fazer Exercicio 5 \n");
       printf("0 - Encerrar o programa. \n");
       printf("Escolha uma opcao: ");
       scanf("%d%*c",&op);

       switch (op)
       {
       case 1:
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
           break;
       
       default:
           break;
       }
    }while(op!=0);

    return 0;
}