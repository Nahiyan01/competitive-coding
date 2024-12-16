#include<bits/stdc++.h>
using namespace std;
int main(){
   int m,n,a;
   cin>>m>>n>>a;
   int x=0,y=0;
   while(n>0){
        if(n%a != 0){
            x++;
        }
        n -= a;
   }

   while(m>0){
        if(m%a != 0){
            y++;
        }
        m -= a;
   }
   long long int ans = x*y;
   if(x == 0 && y == 0){
    cout<< 1 <<endl;
   }
   else{
   cout<<ans<<endl;
   }
return 0;}

