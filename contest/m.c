#include<stdio.h>
int main(){
    int s,t,count=0;
    scanf("%d %d",&s,&t);

    for(int i=0;i<=s;i++){
        for(int j=0;i+j<=s;j++){
            for(int k=0;i+j+k<=s;k++){
                if((i*j*k)<=t){
                    count++;
                }
            }
        }
    }
    printf("%d",count);
return 0;}
