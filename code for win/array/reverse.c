#include<stdio.h>
int main(){
    int a[100],odd[100],even[100];
    int n,oddcount=0,evencount=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i] & 1){
            odd[oddcount] = a[i];
            oddcount++;
        }
        else {
            even[evencount] = a[i];
            evencount++;
        }
    }
    for(int i=0;i<oddcount;i++){
        printf("%d",odd[i]);
    }
    for(int i=0;i<evencount;i++){
        printf("%d",even[i]);
    }
return 9;}
