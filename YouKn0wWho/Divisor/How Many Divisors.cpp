#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

   int a,b,c;
   cin>>a>>b>>c;
   int cnt= 0;
   for(int i=a;i<=b;i++){
    if(c % i == 0){
        cnt++;
    }
   }
   cout<<cnt<<endl;
return 0;

}