#include<stdio.h>
int main(){
    int n,total;
    scanf("%d",n);
    if(n<=10000){
        total= n+ (n*0.2) + (n*0.8);
        printf("%d",total);
    }
    else if(n<=20000){
        total = n+ (n*0.25) + (n*0.9);
        printf("%d",total)
    }
    else {
            total =n+ (n*0.3) + (n*0.95);
        print("%d",total);
    }
return 0;}

