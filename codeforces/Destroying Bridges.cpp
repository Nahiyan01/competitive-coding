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
        if(k >= (n - 1)){
            cout<<1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
return 0;}
