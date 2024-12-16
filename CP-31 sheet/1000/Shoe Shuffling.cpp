#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        bool valid = true ;
        for(auto x:mp){
            if(mp.size() > 1){
                valid = false;
            }
        }

        if(valid){
            a[0] = n;
            cout<<a[0]<<" ";
            for(int i=1;i<n;i++){
               a[i] = i;
               cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        if(!valid){
            cout<< -1 <<endl;
        }
    }
return 0;}
