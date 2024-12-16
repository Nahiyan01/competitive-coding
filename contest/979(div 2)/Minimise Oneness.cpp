#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0;i<n-1;i++){
            v[i] = 0;
        }
        if(n == 1){
            v[n-1] = 0;
        }
        else{
            v[n-1] = 1;
        }
       for(int i=0;i<n;i++){
            cout<<v[i];
       }
       cout<<endl;
    }
return 0;}
