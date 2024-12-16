#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int diff = (a*a) +(b*b);
    if(diff<(c*c)){
        printf("Yes");
    }
    else {
        printf("No");
    }

return ;}
