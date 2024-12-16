#include<stdio.h>
int main(){
    char ch;
     scanf("%c",&ch);
     int a = (int) ch;
     if(a>=65 && a<97){
        printf("Upper case");
     }
     else if (a>=97){
        printf("Lower case");
     }
     else {
        printf("not a letter");
     }
return 0;}



