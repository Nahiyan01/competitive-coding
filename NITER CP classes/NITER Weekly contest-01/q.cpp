#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,y;
   cin>>x>>y;
   int temp = y;
   int result = y%x;
   while(result>0){
    result = y%x;
    y++;
   }
   cout<<(y - temp) -1<<endl;
return 0;}

