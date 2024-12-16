
#include <stdio.h>
int main()
{
    int i,num;
    printf("Enter the maximum number\n");
    scanf("%d",&num);
    printf("Even numbers are :");
    for(i=2; i<=num; i+=2){
        printf("%d ",i);
    }
    printf("\nOdd numbers are :");
    for(i=1; i<=num; i+=2){
        printf("%d ",i);
    }
    return 0;
}
