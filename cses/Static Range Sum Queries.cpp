#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,q;
    cin>>n>>q;
    int a[n];
    vector<long long>pre(n+1);
    pre[0] = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n+1;i++){
        pre[i] = pre[i-1] + a[i-1];
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<pre[b] - pre[a-1]<<endl;
    }
return 0;}
