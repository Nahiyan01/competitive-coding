#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int flag = 0;
    for(int i=0;i<=c;i++){
        if(flag == 0){
            for(int j=0;j<=c;j++){
                if((i*a)+(j*b) == c){
                    printf("Yes");
                    flag =1;
                    break;
                }
            }
        }
    }
    if(flag == 0){
        printf("No");
    }
return 0;}
