#include <stdio.h>
int main(int argc, const char** argv) {
    int n, i, lim;

    printf("Digite um valor inteiro para tabuar: ");
    scanf("%d%*c",&n);

    printf("Digite um valor limite da tabuada: ");
    scanf("%d%*c",&lim);
    for(i=0;i<=lim;i++){
        printf("%i x %i = %i\n",n,i,(n*i));
    }
    return 0;
}