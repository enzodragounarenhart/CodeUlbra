#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    int v[6], vPar[] = {0,0,0,0,0,0},vImpar[] = {0,0,0,0,0,0}, y = 0, somaPar = 0, quantImpar, j = 0;
    
   int op=0;
 
   do{
       printf("\n----------MENU----------\n");
       printf("1 - Ler o vetor de  6 numeros inteiros \n");
       printf("2 - Exibir os numeros pares digitados \n");
       printf("3 - Exibir a soma dos numeros pares digitados \n");
       printf("4 - Exibir os numeros impares digitados \n");
       printf("5 - A quantidade de numeros impares digitados \n");
       printf("6 - Apagar vetores \n");
       printf("0 - Encerrar o programa. \n");
       printf("Escolha uma opcao: ");
       scanf("%d%*c",&op);
       
   
 
       switch(op){
            case 1:{
                printf("\n------------------------\n");
                printf("Digite 6 numeros inteiros: \n");
                for(int i = 0; i < 6; i++)
                {
                    scanf("%i%*c", &v[i]);
                    if (v[i] % 2 == 0 && v[i] != 1)
                    {
                        vPar[y] = v[i];
                        y++;
                        
                    }
                    if (v[i] % 2 != 0 && v[i] != 0)
                    {
                        vImpar[j] = v[i];
                        j++;
                        
                    }
                }
                break;
            }  
            case 2:{
                printf("\n------------------------\n");
                printf("Numeros pares digitados: ");
                
                size_t tamPar = sizeof(vPar)/sizeof(vPar[0]);

                for (int i = 0; i < tamPar; i++)
                {
                    printf("%i, ", vPar[i]);
                }
                break;
            }
            case 3:{
                somaPar = 0;
                printf("\n------------------------\n");
                size_t tamPar = sizeof(vPar)/sizeof(vPar[0]);

                for (int i = 0; i < tamPar; i++)
                {
                    if (vPar[i]!=0)
                    {
                        somaPar = somaPar + vPar[i];
                        printf("Soma atual: %i\n", somaPar);
                    }
                    
                }
                printf("Soma dos numeros pares: %i \n", somaPar);
                somaPar = 0;
                break;
            }
            case 4:{
                printf("\n------------------------\n");
                printf("Numeros impares: ");
                

                size_t tamImpar = sizeof(vImpar)/sizeof(vImpar[0]);

                for (int i = 0; i < tamImpar; i++)
                {
                    printf("%i ,", vImpar[i]);
                }
                break;
            }
            case 5:{
                printf("\n------------------------\n");
                size_t tamImpar = sizeof(vImpar)/sizeof(vImpar[0]);

                for (int i = 0; i < tamImpar; i++)
                {
                    if(vImpar[i] % 2 != 0 && vImpar[i] !=0){
                        quantImpar++;
                    }
                }
                printf("Quantidade de numeros impares: %i", quantImpar);
                quantImpar = 0;
                break;
            }
            case 6:{
                printf("\n------------------------\n");
                for (int i = 0; i < 6; i++)
                {
                    vPar[i] = 0;
                    vImpar[i] = 0;
                }
                printf("Vetores Apagados.\n");
                break;
            }
            
        }
    }while(op!=0);
}
