#include <stdio.h>
int main(){
    int roll;
    printf("Enter the roll : CS-");
    scanf("%d",roll);
    int year = roll /100000;
    if(year == 22){
        printf("YES this is a 1st year NITER CSE student");
    }
    else {
        printf("NO this isn't a 1st year NITER CSE student");
    }
return 0;}
