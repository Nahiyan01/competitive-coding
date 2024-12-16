#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int fact(int n){
	if(n == 0 || n == 1) return 1;
	else{
		return n * fact(n-1);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

   int n;cin>>n;
   ll ans = fact(n);
   cout<<ans<<endl;
return 0;

}