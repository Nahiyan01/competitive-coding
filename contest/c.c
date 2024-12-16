#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int max = (a>b) ? a:b;
    int min = (a<b) ? a:b;
    if(a == b || (max - min)==1){
        printf("%d",(a+b));
    }
    else {
        printf("%d",(max*(max-1)));
    }
return 0;}
