#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int count=0;
        string t ="1234567890";
        string s;
        cin>>s;
        char temp=s[0];
        char last = '0';
        int len = s.size();
        int k=0;
        for(int i=0;i<len;i++){
            if(s[i] == t[k]){
                count++;
                temp = s[i];
            }
            if(s[i] != t[k]&&(s[i]<temp || temp==last)){
                k--;
                count++;
                i--;
            }
            if(s[i] != t[k]&&(s[i]>temp)){
                k++;
                count++;
                i--;
            }

        }
       cout<<count<<endl;
    }
return 0;}
