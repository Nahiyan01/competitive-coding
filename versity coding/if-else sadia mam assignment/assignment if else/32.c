#include<stdio.h>
int method1(int n){
    printf("method 1\n");
if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }
}
int method2(int n){
    printf("method 2\n");
if (n & 1) {
        printf("%d is odd.\n", n);
    } else {
        printf("%d is even.\n", n);
    }
}
int method3(int n){
    printf("method 3\n");
 (n % 2 == 0) ? printf("%d is even.\n", n) : printf("%d is odd.\n", n);
}
int method4(int n){
    printf("method 4\n");
 switch (n % 2) {
        case 0:
            printf("%d is even.\n", n);
            break;
        case 1:
            printf("%d is odd.\n", n);
            break;
    }
}
int method5(int n){
    printf("method 5\n");
int quotient = n / 2;

    if (n == quotient * 2) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }
}
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    method1(n);
    method2(n);
    method3(n);
    method4(n);
    method5(n);
return 0;}
