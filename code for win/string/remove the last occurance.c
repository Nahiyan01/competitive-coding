#include<stdio.h>
#include<string.h>
char remove(char str,char find){
int i=0;
int len = strlen(str);
int lastpos=-1;//assuming that it doesn't exist.//
while(i<len){
    if(str[i]==find){
        lastpos = 1;
        i++;
    }
}
if(lastpos==1){
    int j = lastpos;
    while(j<len){
        str[j] = str[j+1];
        j++;
    }
}
}
int main(){
    char str[100],find;
    fgets(str,sizeof(str),stdin);
    find = getchar();
    remove(str,find);
    printf("%s",str);
return 0;}
