#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(i == 0){
            char a = toupper(s[i]);
            cout<<a;
            i++;
        }
        if(s[i] == 's'){
            cout<<'$';
        }
        else if(s[i] == 'i'){
            cout<<'!';
        }
        else if(s[i] == 'o'){
            cout<<'('<<')';
        }
        else {
            cout<<s[i];
        }
    }
    cout<<'.';
return 0;}
