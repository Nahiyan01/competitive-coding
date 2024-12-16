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
        vector<int> v;
        int m = n * (n-1)/2;
        for(int i = 0; i <m;i++){
            cin >> v[i];
        }
        if(m == 1){
            cout<< v[0] << ' '<< v[0];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
return 0;}
