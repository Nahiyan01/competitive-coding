#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int num = 1;
        for(int i=2;i*i<=n;i++){
            if(n & i == 0){
                num = n/i;
                break;
            }
        }
        cout<<num<<" "<<n - num<<endl;
    }
return 0;}
