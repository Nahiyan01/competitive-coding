#include<stdio.h>
int main(){
   int a[100],b[100],c[100];
   int n1,n2,n3;
   scanf("%d",&n1);
   for(int i=0;i<n1;i++){
    scanf("%d",&a[i]);
   }
   scanf("%d",&n2);
   for(int i=0;i<n2;i++){
    scanf("%d",&b[i]);
   }
   n3 = n1 + n2;
   for(int i=0;i<n1;i++){
    c[i] = a[i];
   }
   for(int i=0;i<n1;i++){
    c[i+n1] = b[i];
   }
   for(int i = 0; i < n3; i++){
        for(int j = i + 1; j < n3; j++) {
            if(c[i] > c[j]) {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
   for(int i = 0; i < n3 ; i++){
    printf(" %d ",c[i]);
   }

return 0;}
