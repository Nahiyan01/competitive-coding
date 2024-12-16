#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y;
        cin>>x>>y;
        int min_num = min(x,y);
        int ans = 0;
        ans = (n/min_num);
        n = n - (min_num * ans);
        if(n != 0){
            ans += 1;
        }

        cout<<ans<<endl;
    }
return 0;}
