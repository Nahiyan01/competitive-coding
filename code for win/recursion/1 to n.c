#include<stdio.h>
int oneton(int start,int end){
    if(start>end)
        return ;
        printf("%d",start);
        oneton(start+1,end);
}

int main(){
    int start,end;
    scanf("%d %d",&start,&end);
    oneton(start,end);

return 0;}
