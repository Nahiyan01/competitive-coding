#include<stdio.h>
int main(){
    int term;
    printf("Enter the term :");
    scanf("%d",&term);
    int a = 0;
    int b = 1;
    int c = 0;
    for(int i=1;i<=term;i++){
        printf("%d,",c);
        a = b;
        b = c;
        c = a+b;
    }
    printf("\b ");
return 0;}
