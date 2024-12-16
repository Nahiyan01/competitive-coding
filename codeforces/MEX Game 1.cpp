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
        vector<int>v(n);
        vector<int>c;
        for(int i=0;i<n;i++){
            cin>>v[i];

        }
        sort(v,v+n);
        map<int,int>mp;
        for(auto x:v){
            mp[x]++;
            if(mp[x] == 2){
               c.push_back(x);
               v.pop_back(x);
               v.pop_back(x);
               n -= 2;
            }
        }
        int turn = 1;
        for(auto x:v){
            if(n == 0){
                break;
            }
            if(turn & 1){
                c.push_back(x);
                v.pop_back(x);
                n--;
            }
            else{
                v.pop_back(x);
                n--;
            }
        }
        sort(c.begin(),c.end());
        set<int>s;
        for(int i=0;i<c.size();i++){
            diff = c[i+1] - c[i];
            s.insert(diff);

        }
    }
return 0;}
