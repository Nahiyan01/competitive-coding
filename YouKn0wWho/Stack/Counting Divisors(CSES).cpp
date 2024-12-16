#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll cnt = 0;
        for(int i=1;i<=sqrt(n);i++){
        	if(n % i == 0){
                cnt++;
        		if(n/i != i){
        			cnt++;
        		}
        	}
    }
    cout<<cnt<<endl;
}
return 0;

}