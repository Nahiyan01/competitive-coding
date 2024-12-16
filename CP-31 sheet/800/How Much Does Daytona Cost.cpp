#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int found = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x == k){
                found = 1;
            }
        }
        if(found)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;}
