#include<stdio.h>
int main(){
    int n,ld,reverse=0;
    printf("Enter the number :");
    scanf("%d",&n);
    int temp = n;
    while(n>0){
        ld = n%10;
        reverse = (reverse*10) + ld ;
        n /= 10;
    }
    if(temp == reverse){
        printf("this is a palindrome number");
    }
    else {
        printf("this is not a palindrome number");
    }
return 0;}
