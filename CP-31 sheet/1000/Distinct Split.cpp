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
        string s;
        cin>>n>>s;
        map<char,int>mp1,mp2;
        int ans  = 0;
        for(auto x:s) mp1[x]++;
        for(int i=0;i<n-1;i++){
            mp2[s[i]]++;
            mp1[s[i]]--;
            if(mp1[s[i]] == 0)mp1.erase(s[i]);
            int len1 = mp1.size();
            int len2 = mp2.size();
            ans = max(ans,len1 + len2);
        }
        cout<<ans<<endl;
    }
return 0;}
