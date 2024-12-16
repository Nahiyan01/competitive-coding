#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int isprime =1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
    }
    if(isprime ==1){
        printf("this is a prime number");
    }
    else {
        printf("it is not a prime number");
    }
return 0;}
