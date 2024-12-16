#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;cin>>n;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(mini>abs(x)) mini = x;
    }
    cout<<abs(mini)<<endl;
return 0;}
