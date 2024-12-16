#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    string t;
    cin>>s;
    int cnt0 = 0,cnt1 = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0'){
            cnt0++;
        }
        else{
            cnt1++;
        }
    }
    int i;
    for(i=0;i<s.size();i++){
        if(s[i] == '0' and cnt1 != 0){
            t+='1';
            cnt1--;
        }
        else if(s[i] == '1' and cnt0 != 0){
            t+='0';
            cnt0--;
        }
        else{
            break;
        }

    }
    cout<<s.size() - i<<endl;
    }
return 0;}
