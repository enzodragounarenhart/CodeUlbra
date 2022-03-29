#include <stdio.h>
#include <string.h>

int main(){
    //vars
    int idade;
    float preco, preco2, z;
    char sequiso;
    char nome[15];
    strcpy(nome, "Enzo");

    printf("Escreva a sua idade: \n");
    scanf("%i",&idade);
    printf("Sua idade eh: %i\n", idade);
    printf("Nome: %s", nome);
    return 0;
}