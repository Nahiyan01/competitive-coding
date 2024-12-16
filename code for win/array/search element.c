#include<stdio.h>
int main()
{
    int a[100];
    int n,find;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&find);
    for(int i=0;i<n;i++){
        if(a[i] == find){
            printf("%d",i);
            break;
        }
    }



    return 0;
}
