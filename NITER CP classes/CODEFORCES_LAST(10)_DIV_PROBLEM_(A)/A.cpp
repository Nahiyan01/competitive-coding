#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int mid;
		if(n%2 == 0){
			mid = n/2;
		}
		else{
			mid = n/2 + 1;
		}
		int cnt=0;
		a[mid]++;
		for(int i=mid;i<n;i++){
			if(a[i]>a[i+1]){
				a[i+1]++;
				cnt++;
			}
			}
			cout<<cnt+1<<endl;
		}
		
	}
 