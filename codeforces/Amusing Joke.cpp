#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,p;
    cin>>s>>t>>p;
    int flag = 1;
    s = s + t;
    sort(s.begin(),s.end());
    sort(p.begin(),p.end());
    for(int i=0;i<s.size();i++){
        if(s[i] != p[i]){
            flag = 0;
        }
    }
    if(s.size() != p.size()){
        cout<<"NO"<<endl;
    }
    else if(flag == 1){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
return 0;}
