#include<stdio.h>

int fibo(int n);

int main(){
    //nth number of a fibonacci series
    int x;
    scanf("%d",&x);

    printf("%d",fibo(x));

return 0;}

int fibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fibo(n - 1) + fibo(n + 1);
}
