#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>mp1,mp2;
        vector<int>v(2*n);
        vector<int>l,r;
        for(int i=0;i<2*n;i++)cin>>v[i];
        for(int i=0;i<n;i++){
            mp1[v[i]]++;
            if(mp1[v[i]]==2){
                l.push_back(v[i]);
                l.push_back(v[i]);
            }
        }
        for(int i=n;i<(2*n);i++){
            mp2[v[i]]++;
            if(mp2[v[i]] == 2){
                r.push_back(v[i]);
                r.push_back(v[i]);
            }
        }
        if(l.size() > 2*k){
            while(l.size() > 2*k){
                l.pop_back();
                r.pop_back();
            }
        }
        else{
            for(auto x:mp1){
                if(l.size() == 2*k){
                    break;
                }
                if(x.second == 1 and mp2[x.first] == 1){
                    l.push_back(x.first);
                    r.push_back(x.first);
                }
            }
        }
        for(auto x:l){
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto x:r){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;}
