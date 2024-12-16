#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        int len = s.size();
        if(s[4] != 's'){
            cout<<"Case "<<i<<": https://";
            for(int k=7;k<=(len - 5);k++){
                cout<<s[k];
            }
            cout<<".com"<<endl;
            }
        else{
            cout<<"Case "<<i<<": "<<s<<endl;
        }
    }
return 0;}
