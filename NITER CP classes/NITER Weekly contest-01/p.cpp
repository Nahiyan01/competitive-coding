#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count =0;
    for(int i=s.size()-1;i>=0;i--){
        if(count ==3 && i>0){
            cout<<",";
            count =0;
        }
        cout<<s[i];
    }
return 0;}
