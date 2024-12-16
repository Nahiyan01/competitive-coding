#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        int cost = p;
        int turn = 1;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].second;
        }
        for(int i=0;i<n;i++){
            cin>>v[i].first;
        }
        sort(v.begin(),v.end());
        for(auto x : v){
            int f = x.first;
            int s = x.second;
            if(x.first > p){
                break;
            }
            cost += (f * min(s,n - turn));
            turn += min(s,n - turn);

        }
        cost += ((n-turn) * p);
        cout<<cost<<endl;


    }
return 0;}
