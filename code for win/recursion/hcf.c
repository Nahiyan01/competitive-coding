#include<stdio.h>

int hcf(int a,int b){
if(b==0) return a;
if(a==0) return b;
 if(a>b){
    return hcf(a%b,b);
 }
 else {
    return hcf(a,b%a);
 }
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("the GCD is %d",hcf(a,b));
return 0;}
