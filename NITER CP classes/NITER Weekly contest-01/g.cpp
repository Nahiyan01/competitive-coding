#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int count=0;
        string s="codeforces";
        string t;
        cin>>t;
        for(int i=0;i<s.size();i++){
            if(t[i] != s[i]){
                count++;
            }
        }
    cout<<count<<endl;
    }
return 0;}
