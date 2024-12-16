#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int comb = 0;
        int one = 0;
        int zero = 0;
        for(int i=0;i<n;i++){
            if((s[i] == '0' and s[i+1] = '1')or s[i] == '1' and s[i+1] == '0'){
                comb++:
            }
            else if(s[i] == '1' and s[i+1] == '1'){
                one++;
            }
            else if(s[i] =='0' and s[i+1] =='0'){
                zero++;
            }
        }

    }
return 0;}
