#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        int a,b;
        cin>>a>>b;
        ll ans = 1e18;
        for(int i=0;i<=31;i++){
            int B = b + i;
            ll op = i;
            int A = a;
            while(A > 0){
                A /= B;
                op++;
            }
            ans = min(ans,op);
        }
        cout<<ans<<endl;
    }
return 0;}
