#include<stdio.h>
int main(){
    int row,i,j;
    scanf("%d",&row);
    for( i=1;i<=row;i++){
        for(j=1;j<=row-i;j++){
            //this is for space
            printf(" ");
        }
        for(j=1;j<=row;j++){
             if(i==1||i==row||j==1||j==row){
                    printf("*");
                }
                else {
                    printf(" ");
                }

        }
        printf("\n");
    }

return 0;}

