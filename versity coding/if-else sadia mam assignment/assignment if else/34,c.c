
#include <stdio.h>

int main()
{
    int num1,num2,i;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    for(i=0; i<num2; i++){
   num1++;
    }
printf("Sum of two numbers : %d ",num1);
    return 0;
}
