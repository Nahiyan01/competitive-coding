//sum of two numbers
#include<stdio.h>
//function diclaration
void sum(int a,int b){
    int ans = a + b;
    printf("%d ",ans);
};
int main(){
    int x,y;
    scanf("%d %d",&x,&y);

    //function call
    sum(x,y);


return 0;}

/*void sum(int a,int b){
    int ans = a + b;
    printf("%d",ans);
}*/
