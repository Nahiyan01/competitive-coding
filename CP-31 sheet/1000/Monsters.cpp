#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int>a;
        vector<int>v;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            x = x%k;
            if(x == 0){
                v.push_back(i+1);
            }
            else if(x != 0){
                a.push_back(i+1);
            }
        }
        for(auto x:v){
            cout<<x<<" ";
        }
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<endl;
    }
return 0;}
