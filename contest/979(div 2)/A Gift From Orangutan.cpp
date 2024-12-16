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
        int a[n];
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi = max(maxi,a[i]);
            mini = min(mini,a[i]);
        }
        int ans = 0;
        for(int i=1;i<n;i++){
            ans += abs(maxi - mini);
        }
        cout<<ans<<endl;
    }
return 0;}
