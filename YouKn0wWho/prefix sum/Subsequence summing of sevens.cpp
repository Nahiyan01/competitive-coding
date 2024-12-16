#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>pref(n+1);
    pref[0] = 0;
    int t = 1;
    while(n--){
        int k;
        cin>>k;
        pref[t] = pref[t-1] + k;
        t++;
    }
    int ans = 0;
    for(int i=0;i<=n;i++){
        for(int j=n;j>=n;j--){
            if((pref[j] - pref[i])%7 == 0){
                ans++;
            }
        }
    }
    cout<<ans<<endl;

return 0;}
