#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char nome[50];
    int valores[5];
    float floatValores[5];
    floatValores[0] = {1};
    floatValores[1] = {2};
    floatValores[2] = {3};
    floatValores[3] = {4};
    floatValores[4] = {5};

    printf("%i", &valores[2]);

}