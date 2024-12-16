#include<stdio.h>
int main(){
    int a,b,c,ans;
    scanf("%d %d %d",&a,&b,&c);
    int max = (a>b) ? a:b;
    int min = (a<b) ? a:b;
    for(int i=min;i<=max;i++){
        if(i%c == 0){
            ans = i;
            break;
        }
        else {
            ans =-1;
        }
    }
    printf("%d",ans);
return 0;}
