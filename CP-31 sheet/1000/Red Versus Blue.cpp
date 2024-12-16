#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
       int n,r,b;
       cin>>n>>r>>b;
       vector<char>v(n);
       int p = (r / (b + 1));
       for(int i=0;i<b;i++){
        for(int j=0;j<p;j++){
            cout<<'R';
        }
        if(r % (b + 1) >= i) cout << 'R';
        cout<<'B';
       }
       for(j = 0;j<p;j++){
        cout<<'R';
       }
       cout<<endl;
    }
return 0;}
