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
        int ans = 0;
        vector<int>v;
        if(n % 2 == 0){
            ans = -1;

        }

        else{
            for(int i=1;i<=n;i++){
                v.push_back(i);
            }
        }
        if(ans == -1){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
return 0;}
