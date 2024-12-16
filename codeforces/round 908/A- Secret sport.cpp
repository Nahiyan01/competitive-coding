#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,cnta=0,cntb=0;
        int flaga=1,flagb=1;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A') cnta++;
            else cntb++;
        }
        if(n<=5){
            cout<<(cnta>cntb ? 'A':'B')<<endl;
        }
        else{
            for(int i=0;i<cnta;i++){
                if(cnta%i==0){
                    flaga = 0;
                }
            }
            for(int i=2;i<cntb;i++){
                if(cntb%i==0){
                    flagb = 0;
                }
            }
            cout<<(flaga>flagb ? 'B':'A')<<endl;
        }
    }
return 0;}
