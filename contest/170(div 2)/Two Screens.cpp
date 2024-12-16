#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        string s,t;
        cin>>s>>t;
        int maxi = max(s.size(),t.size());
        int mini = min(s.size(),t.size());
        bool ok = false;
        int same = 0;
        for(int i=0;i<maxi;i++){
            if(s[i] == t[i]){
                same++;
            }
            else{
                break;
            }
        }
        int cnt1 = maxi - same;
        int cnt2 = 0;
        if(mini != same){
             cnt2 = mini - same;
        }
        if(same == 0){
            cout<<cnt1+cnt2<<endl;
        }
        else{
            cout<<cnt1 + cnt2 + (same + 1) <<endl;
        }


    }
return 0;}
