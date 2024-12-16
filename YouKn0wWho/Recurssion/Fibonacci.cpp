#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int fibo(int n){
	if(n <= 1) return n;
	else{
		return fibo(n-1) + fibo(n-2);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

   	int n;cin>>n;
  	ll ans = fibo(n);
  	cout<<ans<<endl;

  	
return 0;}