#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    double persentage = (double)((a-b)*100)/a;
    printf("%0.18lf",persentage);
return 0;}
