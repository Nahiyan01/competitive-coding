#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    gets(str);
    int len = strlen(str);
    int index = 0;
    int wordend = len;
    for(int i=len-1;i>0;i--){
        if(str[i]==' '){
            for(int j=i+1;i<=wordend;i++){
                rev[index] = str[i];
                index++;
            }
            rev[index++] = ' ';
            wordend = i - 1;
        }
    }
    for(int i=0;i<=wordend;i++){
        rev[index] = str[i];
        index++;
    }
    rev[index] = '\0';
    printf("%s",rev);
return 0;}
