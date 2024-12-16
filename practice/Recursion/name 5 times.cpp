#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int func(int i,int n){
	if(i>n) return 0;
	else{
		cout<<"Nahiyan"<<endl;;
		func(i+1,n);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    func(1,n);
return 0;
}
