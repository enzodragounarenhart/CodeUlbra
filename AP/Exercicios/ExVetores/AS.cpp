#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
   int op=0;
   
   do{
       printf("1- Ler o vetor de  6 números inteiros\n ");
       printf("2 - Exibir Os números pares digitados; \n ");
       printf("3 - Exibir A soma dos números pares digitados; \n ");
       printf("4 - Exibir Os números ımpares digitados ; \n");
       printf("5 - A quantidade de números ımpares digitados;\n ");
       scanf("%d%*c",&op);
   
 
       switch(op){
            case 1:{
                printf("xxxxxxxx\n ");
                break;
            }  
            case 2:{
                printf("yyyy\n ");
                break;
            }
            case 3:{
                printf("vvvv\n ");
                break;
            }
              case 4:{
                printf("444\n ");
                break;
            }
              case 5:{
                printf("555\n ");
                break;
            }
 
 
       }
 
   }while (op!=6);
   return 0;
}
