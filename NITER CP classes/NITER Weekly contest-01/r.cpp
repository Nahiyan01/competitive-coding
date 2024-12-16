#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len = s.size();
    for(int i=0;i<len;i++){
        if(s[i] == 's') cout<<"$";
        else if (s[i] == 'i') cout<<"!";
        else if(s[i] == 'o'){
            cout<<"()";
    }
    else{
    if(i == 0 && isalpha(s[i])){
        s[i] = toupper(s[i]);}
        cout<<s[i];
    }
    }
    cout<<"."<<endl;
return 0;}

