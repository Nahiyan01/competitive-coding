
#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  while(cin>>a && cin>>b && cin>>c){
    if(a == 0 && b == 0 && c==0){
        break;
    }
    else {
        int high = max(max(a,b),c);
        int low = min(min(a,b),c);
        int left = (a+b+c) - (high + low);
        long long as ,bs, cs;
        as = low * low;
        bs = left * left;
        cs = high * high ;
        if(as + bs ==cs){
            cout<<"right"<<endl;
        }
        else {
            cout<<"wrong"<<endl;
        }
    }
  }
return 0;}



