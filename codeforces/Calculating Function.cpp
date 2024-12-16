#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,e,o;
    cin>>n;
    if(n & 1){
        cout<<-(n+1)/2<<endl;
    }
    else {
        cout<<n/2<<endl;
    }
return 0;}
