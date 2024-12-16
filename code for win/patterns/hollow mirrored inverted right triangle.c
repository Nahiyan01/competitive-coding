#include<stdio.h>
int main(){
    int row;
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        for(int j=i; j<=row;j++){
            if(i==1||j==row||j==i){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;}
