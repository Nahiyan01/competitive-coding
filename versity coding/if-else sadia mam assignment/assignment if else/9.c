#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 switch(n){
     case 1: printf("saturday") ;
     break;
     case 2: printf("sunday") ;
     break;
     case 3: printf("monday") ;
     break;
     case 4: printf("tuesday") ;
     break;
     case 5:
         printf("wednesday");
        break;
     case 6:
         printf("thursday");
          break;
     case 7:
         printf("friday") ;
         break;
     default:
        printf("not a proper number");
        break;
 }
return 0;}



