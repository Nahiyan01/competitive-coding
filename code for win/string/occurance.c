#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    char letter;
    int index;
    scanf("%c",&letter);
    int len = strlen(str);
    for(int i=0;i<=len-1;i++){
        if(str[i]==letter){
            index = i + 1;
        }
    }
    printf("%d",index);
return 0;}
