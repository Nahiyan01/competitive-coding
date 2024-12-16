#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count = 1,m;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(i == 0){
            m = n;
            continue;
        }
        else {
            if(n != m) count++;
        }
        m = n;
    }
    cout<<count<<endl;
return 0;}
