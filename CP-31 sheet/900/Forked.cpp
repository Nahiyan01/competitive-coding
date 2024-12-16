#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        set<pair<int,int>>s1,s2;

        vector<pair<int,int>> direction = {{a,b},{-a,b},{a,-b},{-a,-b},
                                        {b,a},{-b,a},{b,-a},{-b,-a}};

        for(auto d:direction){
            int x = xk+d.first;
            int y = yk+d.second;

            s1.insert(make_pair(x,y));

            x = xq + d.first;
            y = xq + d.second;

            s2.insert(make_pair(x,y));
        }

        int ans =0 ;

        for(auto x:s1){
            if(s2.find(x) != s2.end()){
                ans++;
            }
        }

        cout<<ans<<endl;
    }
return 0;}
