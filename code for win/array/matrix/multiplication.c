#include<stdio.h>
int main(){
    int a[100][100],b[100][100],product[100][100];
    int arow,acol,sum=0;
    scanf("%d %d",&arow,&acol);
    for(int i=0;i<arow;i++){
        for(int j=0;j<acol;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int brow,bcol;
    scanf("%d %d",&brow,&bcol);
    if(acol != brow){
        printf("this is not possible");
    }
    else{
    for(int i=0;i<brow;i++){
        for(int j=0;j<bcol;j++){
            scanf("%d",&b[i][j]);
        }
    }
    }
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcol;j++){
            for(int k=0;k<acol;k++){
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
    for(int i=0;i<arow;i++){
        for(int j=0;j<bcol;j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
return 0;}
