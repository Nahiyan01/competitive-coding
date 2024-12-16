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
        vector<int>v1,v2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i & 1){
                v2.push_back(x);
            }
            else{
                v1.push_back(x);
            }
        }
        int v1_max = INT_MIN;
        for(int i=0;i<v1.size();i++){
            v1_max = max(v1_max,v1[i]);
        }
        int v2_max = INT_MIN;
        for(int i=0;i<v2.size();i++){
            v2_max = max(v2_max,v2[i]);
        }
        int v1_score = v1_max + v1.size();
        int v2_score = v2_max + v2.size();
        cout<<max(v1_score,v2_score)<<endl;
    }
return 0;}
