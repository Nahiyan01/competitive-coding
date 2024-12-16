#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int arr[b];
    int mini=10000;
    for(int i=0;i<b;i++){
        cin>>arr[i];
    }
    sort(arr,arr+b);
    for(int i=a;i<=b;i++){
        mini = min(mini,abs(arr[i-1]-arr[i-a]));
    }
    cout<<mini<<endl;
return 0;}
