#include<stdio.h>
int main(){
    char text[100];
    gets(text);
    int count=0;
    for(int i=0;text[i]!='\0';i++){
        if(text[i]==' '){
            count++;
        }
    }
    printf("%d",count+1);
return 0;}
