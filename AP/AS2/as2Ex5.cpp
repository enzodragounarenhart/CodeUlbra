#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

main(){
    char nomes[5][20], nomeConsulta[20];

    int tel[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe o nome: ");
        gets(nomes[i]);
        printf("Informe o numero: ");
        scanf("%i%*c", &tel[i]);
    }
    
    printf("Qual pessoa deseja consultar? ");
    gets(nomeConsulta);

    for (int i = 0; i < 5; i++)
    {
        if(strcmp(nomes[i], nomeConsulta)==0){
            printf("Numero da pessoa consultada: %i", tel[i]);
        }
    }
    
    printf("Pressione qualquer tecla para sair.");
    getch();

    return 0;
}