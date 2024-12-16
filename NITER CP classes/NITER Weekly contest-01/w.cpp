#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  while(cin>>a && cin>>b){
    if(a == 0 && b == 0){
        break;
    }
    else {
            int remain =0;
            int count=0;
        while(a>0 && b>0){

            int ld1 = a%10;
            int ld2 = b%10;
            if((remain+(ld1 + ld2))>=10){
                count++;
            }
            int remain = (ld1+ld2) /10;
            a = a/10;
            b =b/10;
        }
        if(count>0){
            cout<<count<<"  carry operations."<<endl;
        }
        else {
            cout<<"No carry operation."<<endl;
        }
    }
  }
return 0;}



