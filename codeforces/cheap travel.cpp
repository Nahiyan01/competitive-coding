#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int k = n/m;
    int left = n%m;
    if(m * a<=b){
        cout<<n*a<<endl;
    }
    else{
        cout<<k * b + min(left * a , b)<<endl;
    }

return 0;}
