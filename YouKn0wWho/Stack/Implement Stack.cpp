#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i = 1;i<=sqrt(n);i++){
        if(n % i == 0){
            if(n/i != i){
                v.push_back(i);
            }
            else{
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(k >= v.size()){
        cout<<-1<<endl;
    }
    else{
        cout<<v[k-1]<<endl;
    }
return 0;}