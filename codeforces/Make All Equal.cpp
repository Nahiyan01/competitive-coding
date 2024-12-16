#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        int highest= 0;
        for(auto x:mp){
           if(x.second > highest){
                highest = x.second;
           }
        }
        cout<<n - highest<<endl;
    }
return 0;}
