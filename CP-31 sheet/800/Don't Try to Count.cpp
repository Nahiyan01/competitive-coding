#include<bits/stdc++.h>
using namespace std;
int ans(string x,string s){
        int operation = 0;
        while(x.find(s) == string::npos){
            x += x;
            operation++;
            if(x.length() > 100){
                operation = -1;
                break;
            }
        }
        return operation;
    }
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        int res = ans(x,s);
        cout<<res<<endl;
    }
return 0;}
