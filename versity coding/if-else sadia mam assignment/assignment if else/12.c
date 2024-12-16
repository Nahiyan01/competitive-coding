#include<stdio.h>
int main()
{
    int t1,t2,t3;
    scanf("%d %d %d",&t1,&t2,&t3);
    if(t1+t2>t3 || t2 +t3>t1 || t1 +t3>t2){
        printf("yes");
    }
    else {
        printf("no ");
    }
return 0;
}9
