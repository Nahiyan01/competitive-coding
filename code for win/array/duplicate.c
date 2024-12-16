#include<stdio.h>
int main(){
    int arr[100];
    int n,count;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        if(arr[i]==arr[j]){
            count++;
            break;
        }
    }
    printf("%d",count);
return 0;}
