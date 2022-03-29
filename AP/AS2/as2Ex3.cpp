#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char nomes[5][20];
    float notas[5], soma = 0, media = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Escreva o nome do aluno: ");
        scanf("%s", &nomes[i]);
        printf("Escreva a nota do aluno: ");
        scanf("%f%*c", &notas[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        soma = soma + notas[i];
    }
    
    media = soma/5;

    printf("Lista dos que tiraram acima da media:\n");
    for (int i = 0; i < 5; i++)
    {
        
        if (notas[i] >= media)
        {
            printf("%s\n", nomes[i]);
        }
        
    }

    printf("Pressione qualquer tecla para sair.");
    getch();

    return 0;
}
