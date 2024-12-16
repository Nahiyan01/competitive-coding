#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l_change = 0;
        int r_change = 0;
        int k_count=0;
        for(int i=0;i<n;i++){
            if(k_count >= k){
                break;
            }
            else if(s[i] == 'W'){
                k_count++;
                l_change++;
            }
            else if(s[i] == 'B'){
                k_count++;
            }

        }
        k_count = 0;
        for(int i=n-1;i>=0;i--){
            if(k_count >= k){
                break;
            }
            else if(s[i] == 'W'){
                k_count++;
                r_change++;
            }
            else if(s[i] == 'B'){
                k_count++;
            }
        }
        cout<<min(l_change,r_change)<<endl;
    }
return 0;}
