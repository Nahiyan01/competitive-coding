#include<stdio.h>
int main(){
    int buy,sell;
    scanf("%d %d",&buy,&sell);
    if(sell-buy>0){
        printf("profit");
    }
    else if (sell-buy<0){
        printf("loss");
    }
    else {
        printf("non-profit but also not a loss");
    }
return 0;}9
