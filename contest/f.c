#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double t = c+0.5;
    int period = (int) t/a;
    int totalbiscuit = b * period;
    printf("%d",totalbiscuit);
return 0;}
