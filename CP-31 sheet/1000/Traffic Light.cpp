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
        char c;
        string s;
        cin>>n;
        cin>>c;
        cin>>s;
        s += s;
        int cnt = 0;
        int maxi = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == c){
                cnt = 0;
                while(s[i] != 'g' and i<s.size()){
                    cnt++;
                    i++;
                }
                if(cnt > maxi){
                    maxi = cnt;
                }
            }
        }
        cout<<maxi<<endl;
    }
return 0;}
