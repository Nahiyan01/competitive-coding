#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll mid_idx = n/2;
    ll mid = a[mid_idx];
    ll ans = 0;
    for(ll i=0;i<n;i++){
        ans += abs(a[i] - mid);
    }
    cout<<ans<<endl;
return 0;}
