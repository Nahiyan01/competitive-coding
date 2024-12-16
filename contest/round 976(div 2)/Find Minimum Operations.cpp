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
        if(k == 1){
            cout<<n<<endl;
            continue;
        }
        int cnt = 0;
        while(n > 0){
            cnt += n % k;
            n/=k;
        }
        cout<<cnt<<endl;
    }
return 0;}
