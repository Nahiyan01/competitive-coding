#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int best = 0, curr =0;
    for(int i=0;i<s.size();i++){
        if(s[i] != s[i-1]){
            best = max(best,curr);
            curr =0;
        }
        curr++;
    }
    best = max(best,curr);
    if(best>=7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;}
