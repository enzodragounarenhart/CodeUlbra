#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    int i,j,n,ch1,ch2;
    char str[50],temp;
    printf("Enter any string:");
    scanf("%s",str);
    strlwr(str);
    n=strlen(str);

    for(i=1;i<n;++i){

        for(j=0;j<(n-i);++j){

            ch1=str[j];
            ch2=str[j+1];

            if(ch1>ch2){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("String after arranging %s",str);
    getch();
}