#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int v1[10], v2[10], v3[20];

    for(int i = 0; i<10; i++){
        printf("Escreva um numero para o vetor 1: ");
        scanf("%i%*c",&v1[i]);
    }

    for(int i = 0; i<10; i++){
        printf("Escreva um n1umero para o vetor 2: ");
        scanf("%i%*c",&v2[i]);
    }
    
    for (int k = 0; k < 20; k++)
    {   
        int l = 0;
        v3[l]=v1[k];
        l++;
        v3[l]=v2[k];
        l++;
    }

    for(int i = 0; i<20; i++){
        printf("Vetor 3 no index %i: %i\n",i, v3[i]);
    }

    return 0;
}
