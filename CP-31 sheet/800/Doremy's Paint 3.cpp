#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>mp;
        vector<int>v;
        int flag = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size() >= 3){
            flag = 1;
        }
        for(auto x:mp){
            int z = x.second;
            v.push_back(z);
        }
        if(flag == 0){
            if(mp.size() == 1){
            cout<<"Yes"<<endl;
        }
        else if(abs(v[0] - v[1]) >=2){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        }
        else{
            cout<<"No"<<endl;
        }
    }
return 0;}
