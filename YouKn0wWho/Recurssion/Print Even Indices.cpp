#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int method(int n,int a[]){
	if(n == 0) return a[0];
	method(n)
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }

    cout<<method(n,a);


return 0;}