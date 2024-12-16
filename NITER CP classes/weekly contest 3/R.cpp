#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    int n;
    cin>>n;
    int sum = 0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    set<int>a;
    for(int i=n-1;i>=0;i--){
        a.insert(arr[i]);
    }
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<"Case "<<i<<": "<<sum<<endl;}
return 0;}
