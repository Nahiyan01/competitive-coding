#include<stdio.h>
int main(){
    int n = 10;
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int j=i;j<=n;j++){
         printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;}

