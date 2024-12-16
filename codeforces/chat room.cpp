#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string t = "hello";
    cin>>s;
    int k =0;
    for(int i=0;i<s.size();i++){
        if(s[i] == t[k]){
            k++;
        }
    }
    if(k == t.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;}
