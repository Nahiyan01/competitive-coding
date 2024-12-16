#include<stdio.h>
int main(){
    char ch;
     scanf("%c",&ch);
     int a = (int) ch;
     if(a<48){
        printf("special character");
     }
     else if(a<=64){
        printf("digit");
     }
     else {
        printf("alphabet");
     }
return 0;}


