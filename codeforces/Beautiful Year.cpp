#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   while(1){
    n++;
   int one = n/1000;
   int two = n/100 % 10;
   int three = n/10 % 10;
   int four = n%10;
   if(one != two && one != three && one != four && two != three && two != four && three != four){
        break;
   }
   }
    cout<<n<<endl;
return 0;}
