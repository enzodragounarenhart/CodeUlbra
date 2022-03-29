#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

main(){
    int notas[20], media, soma = 0, temp;


    printf("Escreva as notas dos alunos(20): ");

    for (int i = 0; i < 20; i++)
    {
        scanf("%i%*c", &notas[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        temp = notas[i];
        soma = soma + notas[i];
        printf("Soma: %i\n", soma);
    }  

    media = soma/20;

    printf("Notas Maiores que a media: ");
    for (int i = 0; i < 20; i++)
    {
        
        if (notas[i] > media)
        {
            printf("%i, ", notas[i]);
        }
        
    }

    printf("Notas Menores que a media: ");
    for (int i = 0; i < 20; i++)
    {
        
        if (notas[i] < media)
        {
            printf("%i, ", notas[i]);
        }
        
    }
    
    printf("Pressione qualquer tecla para sair.");
    getch();
    
    return 0;
}