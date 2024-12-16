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
        for(int i=0;i<n;i++){
            v.push_back(i);
        }
        int turn = 1;
        if(n > 2){
            for(int i=1;i<n;i++){
            if(turn & 1) {
                v[i] = max(v[i],v[i+1]);
                v.back(v[i+1]);
                v.pop_back(v[i+1]);
                turn++;
            }
            else{
                v[i-1] = min(v[i],v[i-1]);
                n--;
                turn++;
            }
        }
        }

        cout<<v[0]<<endl;
    }
return 0;}
