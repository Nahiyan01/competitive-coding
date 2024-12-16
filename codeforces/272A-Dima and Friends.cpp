#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    if((n&1 && sum&1) || ((n%2==0) && (sum%2==0))){
        cout<<3<<endl;
    }
    else{
        cout<<2<<endl;
    }

    return 0;}

