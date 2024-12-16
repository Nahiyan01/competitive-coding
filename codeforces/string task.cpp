#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] != 'A' &&s[i] != 'E' &&s[i] != 'I' &&s[i] != 'O' &&s[i] != 'U' &&s[i] != 'Y' &&s[i] != 'a' &&s[i] != 'e' &&s[i] != 'i' &&s[i] != 'o' &&s[i] != 'u' &&s[i] != 'y'){
            t += ".";
            t += tolower(s[i]);
        }
    }
    cout<<t;
    return 0;
}
