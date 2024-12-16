#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int star = 1;
    int space = n - 1;
    for(int i = 1;i<n*2;i++){
        for(int j=1;j<space;j++){
            printf(" ");
        }
        for(int j=1;j<= star * 2 -1;j++){
            printf("*");
        }
        printf("\n");
        if(i<n){
            space--;
            star++;
        }
        else{
            space++;
            star--;
        }
    }

return 0;}

