#include<stdio.h>
#include<string.h>
int main(){
    char text[100],rev[100];
    int len;
    gets(text);
    for(int i=0;text[i]!='\0';i++){
        len = i;
    }
    int revindex=0;
    int textindex = len -1;
    while(textindex>=0){
        rev[revindex] = text[textindex];
        textindex--;
        revindex++;
    }
    rev[revindex] = '\0';
   printf("%s",rev);
return 0;}
