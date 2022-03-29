#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

main(){
    int vetor[10], vetorBack[10], x = 0;

    printf("Escreva 10 numeros: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%i%*c", &vetor[i]);
    }
    

    for (int i = 9; i >= 0; i--)
    {
        vetorBack[x++] = vetor[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Numeros digitados ao contrario: %i\n", vetorBack[i]);
    }
    
    printf("Pressione qualquer tecla para sair.");
    getch();

    return 0;
}