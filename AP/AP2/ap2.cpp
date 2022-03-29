#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
    char str[50], strA[50], char1, char2, temp, rvStr[50];
    int i, y, n, j, x, a, op;

    printf("Escreva uma palavra: \n");
    gets(str);
    n = strlen(str);
    strupr(str);
    
        printf("------ MENU DE OPCOES ------\n");
        printf("1 - ORDENAR\n");
        printf("2 - SUBSTITUICAO\n");
        printf("3 - ENCERRAR\n");
        printf("Escolha a opcao: ");
        scanf("%i", &op);


        switch(op){
            case 1: for(j = 1; j<n; j++){
        
                    for(y=0; y<(n-j) ;y++){
            
                        char1 = str[y];
                        char2 = str[y+1];

                        if(char1>char2){
                            temp = str[y];
                            str[y] = str[y+1];
                            str[y+1] = temp;
                        }
                    }
                }    
                printf("Palavra em ordem alfabetica: %s\n", str);
                printf("Pressione uma tecla para sair.");
                getch();
                break;
            case 2: x = 0;
                    printf("%s\n",str);
                    for (a = n - 1; a >= 0; a--)
  	                {
  		            rvStr[x++] = str[a];
  	                }
                    printf("%s\n", rvStr);
                    for(int i=0; rvStr[i]!='\0';i++){
                        if(rvStr[i]==' '){
                            rvStr[i]='_';
                        }
                    }
                    
                    printf("Palavra com underline e ao contrario: %s\n", rvStr);
                    printf("Pressione uma tecla para sair.");
                    getch();
                    break;
            case 3: printf("Programa encerrado.");
                    break;
        }
    return 0;
}