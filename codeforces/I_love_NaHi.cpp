#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,k,cnt=0;
    cin>>n;
    cin>>a;
    int maxi = a;
    int mini = a;
    for(int i=2;i<=n;i++){
        cin>>k;
        if(k<mini){
            mini = k;
            cnt++;
        }
        else if(k>maxi){
            maxi = k;
            cnt++;
        }
    }
    cout<<cnt<<endl;

return 0;}
