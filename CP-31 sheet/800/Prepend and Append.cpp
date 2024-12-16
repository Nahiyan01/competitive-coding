#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;
        cin>>s;
        ll ans = n;
        ll i = 0;
        ll j= n-1;

        while(s[i] != s[j] && ans>0){
            i++;
            j--;
            ans -= 2;
        }
        cout<<ans<<endl;

    }
return 0;}
