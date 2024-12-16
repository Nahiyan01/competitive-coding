#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    //for this I have to know take 3 consecutive numbers and 2 odd and 1 even to make sure the GCD is
    // 1 every case and then divide that by 2 to make it round I will  agian divide it by 2
    int t;
    cin>>t;
    while(t--){
       int a,b;
       cin>>a>>b;
       cout<<((b + 1)/2 - a/2) / 2 <<endl;
    }
return 0;}
