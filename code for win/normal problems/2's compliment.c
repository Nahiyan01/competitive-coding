#include<stdio.h>
#define size 8
int main(){
   char binary[size +1],onescomp[size +1],twocomp[size +1];
   int carry=1,error =0;
   printf("enter the binary number");
   gets(binary);
   for(int i=0;i<size;i++){
    if(binary[i] == '1') onescomp[i] = '0';
    else if(binary[i] == '0') onescomp[i] ='1';
    else {
        printf("invalid input");
        error = 1;
        break;
   }
   }
   onescomp[size] ='\0';
  for(int i=size-1;i>=0;i--){
    if(onescomp[i] == '1' && carry==1) twocomp[i] ='0';
    else if(onescomp[i] == '0' && carry==1){
      twocomp[i] = '1';
      carry = 0;
    }
     else twocomp[i] = onescomp[i];
  }
  twocomp[size] = '\0';
  if(error = 0){
  printf("the two's compliment of the following number is %s\n",twocomp);
  }

return 0;}
