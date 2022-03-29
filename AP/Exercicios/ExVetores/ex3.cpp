#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
char string[30];
char novaString[30];
char letra;
printf("Digite uma string\n");
scanf("%s%*c", string); //scanf..
for(int i=0;string[i]!='\0';i++){
if(i%2==0){
printf("%c",toupper(string[i]));
}else{
printf("%c",tolower(string[i]));
}
}


printf("\n%c",tolower(string[0])) ;
printf("\n%s",string) ;
return 0;
}