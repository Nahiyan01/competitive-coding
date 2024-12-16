#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
       int n,x;
       cin>>n>>x;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int l = a[0] - x;
       int r = a[0] + x;
       int ans = 0;
       for(auto z : a){
            l = max(l,z - x);
            r = min(r,z + x);
            if(l > r){
                ans++;
                l = z - x;
                r = z + x;
            }
       }
       cout<<ans<<endl;
    }
return 0;}
