#include<stdio.h>

int sum(int n,int arr[]){
if(n<0) return 0;
else return arr[n] + sum(n-1,arr);
}

int main(){
    int n;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sum(n-1,arr));
return 0;}
