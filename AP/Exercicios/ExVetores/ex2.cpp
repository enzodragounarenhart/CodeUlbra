#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int v[20], men, menPos, mai, maiPos;

    for(int i = 0; i < 20; i++){
        printf("Digite um numero para o vetor[%i]: ",i);
        scanf("%d%*c", &v[i]);
    }

    men = v[0];
    mai = v[0];

    for(int i = 0; i < 20; i++){
        
        if(men > v[i]){
            men = v[i];
            menPos = i;
        }

        if(mai < v[i]){
            mai = v[i];
            maiPos = i;
        }

    }
    printf("\n O menor elemento do Vetor = %i",men);
    printf("\n A posicao menor elemento do Vetor = %i\n",menPos);
    printf("\n O maior elemento do Vetor = %i\n",mai);
    printf("\n A posicao menor elemento do Vetor = %i",maiPos);

    return 0;
}
