#include <stdio.h>
void main() {
  int a,b,user;
  printf("Enter the first Integer :");
  scanf("%d",&a);
  printf("Enter the second Integer :");
  scanf("%d",&b);
    printf("1-Addition.\n 2-Substraction.\n  3-Multiplication.\n  4-Division.\n");
    printf("\nInput your option :\n");
    scanf("%d",&user);
    switch(user) {
      case 1:
        printf("The Addition of  %d and %d is: %d\n",a,b,a+b);
        break;

      case 2:
        printf("The Substraction of %d  and %d is: %d\n",a,b,a-b);
        break;

      case 3:
        printf("The Multiplication of %d  and %d is: %d\n",a,b,a*b);
        break;

      case 4:
        if(b==0) {
          printf("The second integer is zero. Devide by zero.\n");
        } else {
          printf("The Division of %d  and %d is : %d\n",a,b,a/b);
        }
        break;
      default:
        printf("Input correct option\n");
        break;
    }
}

