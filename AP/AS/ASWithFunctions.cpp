#include <stdio.h>
#include <ctype.h>
#include <string.h>

int soma(int v1, int v2){
    int soma;
    
    soma = v1 + v2;

    return soma;
}

main(){
    int v1, v2;

    printf("Digite um numero: \n");
    scanf("%i%*c", &v1);
    printf("Digite outro numero: \n");
    scanf("%i%*c", &v2);
    

    printf("Soma do vetor: %i", soma);
    return 0;
}