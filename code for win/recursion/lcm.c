#include<stdio.h>

int hcf(int a,int b){
if(b==0)return a;
else return hcf(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("the LCM is %d",(a*b)/hcf(a,b));
return 0;}

