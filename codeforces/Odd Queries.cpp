#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        int n,q;
        cin>>n>>q;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pre[n+1];
        for(int i=1;i<n+1;i++){
            pre[i] = pre[i-1] + a[i-1];
        }
        for(int i=0;i<q;i++){
            long long l,r,k;
            cin>>l>>r>>k;
            long long ans = pre[n] - (pre[r] - pre[l-1]) + k*(r-l+1);
            if(ans & 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
return 0;}
