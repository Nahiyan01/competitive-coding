#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countupper=0;
    int countlower=0;
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])){
                countupper++;
            }
            else{
                countlower++;
            }
            }
            char ch;
        if(countupper>countlower){
            for(int i=0;i<s.size();i++){
                ch = toupper(s[i]);
                cout<<ch;
            }
        }
        else{
            for(int i=0;i<s.size();i++){
                ch = tolower(s[i]);
            cout<<ch;
            }
        }
return 0;}
