#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cnt=0;
		int i = 0;
		while(i<s.size()){
			if(s[i] == '@'){
				cnt++;
				i++;
			}
			else if(s[i] == '.'){
				i++;
			}
			else if(s[i] == '*'){
				if(s[i+1] == '*'){
					break;
				}
				else{
					i++;
				}
			}
		}
		cout<<cnt<<endl;
	}
}