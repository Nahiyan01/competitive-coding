#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        ll odds = 0;
        for(int i=0;i<n-1;i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            ll freq = it.second;
            if(freq & 1){
                odds++;
            }
        }
        if(k < odds - 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
return 0;
}