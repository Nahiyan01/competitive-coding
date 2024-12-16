#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
   string s;
   getline(cin,s);
   sort(s.begin(),s.end());
   int len = s.size();
   for(int i=0;i<len;i++){
    if(s[i] == s[i-1]){
        for(int k=i;k<len;k++){
            s[k] = s[k+1];
        }
        i--;
        len--;
    }
   }
    if(len<=2) cout<<0<<endl;
    else if(len==3) cout<<1<<endl;
    else cout<<len-4<<endl;
return 0;}

