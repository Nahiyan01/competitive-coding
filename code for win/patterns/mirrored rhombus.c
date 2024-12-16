#include<stdio.h>
int main(){
    int row;
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i-1;j++){
            //this is for space
            printf(" ");
        }
        for(int j=1;j<=row;j++){
                printf("*");
        }
        printf("\n");
    }

return 0;}
