#include<stdio.h>

int sumofdigit(int n){
    return (n>0) ? ((n%10) + sumofdigit(n/10)) : 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumofdigit(n));
    return 0;
}
