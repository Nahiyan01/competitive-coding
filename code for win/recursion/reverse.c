#include<stdio.h>
#include<math.h>
int reverse(int n){
    if(n>0){
        int digit = log10(n);
        return ((n%10) * pow(10,digit) + reverse(n/10));
    }
    else {
        return 0;
    }
}

int main(){
    int n,rev;
    scanf("%d",&n);
    rev = reverse(n);
    printf("%d",rev);
return 0;}
