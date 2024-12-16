#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m;
        cin>>n>>m;
        int count = 0;
        int sum = 0;
        for(int j=1;j<=n;j++){
            if(count == m){
                j = j+m;
                count = 0;
            }
            sum -= j;
            count++;
        }
        int total = (n*(n-1))/2;
        cout<<"Case "<<i<<": "<< total - sum <<endl;
    }
return 0;}
