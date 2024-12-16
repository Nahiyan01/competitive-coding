#include<stdio.h>
int main()
{
    int k,s,count=0;
    scanf("%d %d",&k,&s);
    for(int x=0;x<=k;x++){
        for(int y=0;y<=k;y++){
            for(int z=0;z<=k;z++){
                if((x+y+z) == s){
                    count++;
                }
            }
        }
    }
    printf("%d",count);
return 0;
}
