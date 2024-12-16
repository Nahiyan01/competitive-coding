#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        string a,b;
        cin>>a>>b;
        int n = a.size();
        int m = b.size();
        int ans = 0;
        for(int len = 1;len<=min(n,m);len++){
            for(int i=0;i+len<=n;i++){
                for(int j=0;j+len<=m;j++){
                    if(a.substr(i,len) == b.substr(j,len)){
                        ans = max(ans,len);
                    }
                }
            }
        }
        cout<<n + m - (2 * ans)<<endl;
    }
return 0;}
