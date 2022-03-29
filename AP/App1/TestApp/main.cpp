#include <iostream>
#include <stdio.h>
#include <string.h>
#define x 7

using namespace std;

int main()
{
    int ano = 0;
    float salario;
    char nome[40];
    salario = 50.0;
    strcpy(nome,"Enzo Dragoun Arenhart");
    printf("Nome: %s \n", nome);
    printf("Ano: %s \n", ano);
    printf("Digite o ano: %s \n");
    scanf("%i%*c",&ano);
    printf("Ano: %s \n", ano);
    printf("Digite o nome: %s \n");
    scanf("%c%*c",&nome);
    printf("Nome: %s \n", nome);
    return 0;
}
