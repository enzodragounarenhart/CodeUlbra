#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int v1[5], v2[5], v3[10], valor1, valor2;

    for (int i = 0; i < 5; i++)
    {
        printf("Escreva um numero para v1: ");
        scanf("%d", &v1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Escreva um numero para v2: ");
        scanf("%d", &v2[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("v2 index %i: %i\n", v2[i]);
        v3[i] = v1[i];
        i++;
        v3[i] = v2[i-1];

        printf("v2 index %i: %i\n", i-1, v2[i]);
        
    }

    for (int i = 0; i < 10; i++)
    {
        printf("v3 em %i: %i\n", i,v3[i]);
    }
    
    

    return 0;
}