#include<stdio.h>
int prime(int x);
int main(){
    int n;
    scanf("%d",&n);
    int p=0;
    while(n--){
     for(int i=p+5;i<100;i++){
        int isprime=1;
        for(int j=i;j<i/2;i++){
            if(i%j==0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
            p = i;
        }
        if(prime(p+2) == 1 && prime(p+6) == 1 && prime(p+8) == 1){
            break;
        }
     }
    printf("%d %d %d %d",p,p+2,p+6,p+8);
    printf("\n");
    }
return 0;}

int prime(int x){
    int isprime = 1;
    for(int i=2;i<x;i++){
        if(x%i == 0){
            isprime=0;
            break;
        }
    }
    if(isprime == 1){
        return 1;
    }
    else {
        return 0;
    }
}

