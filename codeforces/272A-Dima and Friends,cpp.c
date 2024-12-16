#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f;
    int sum = 0;
    cin>>n;
    while(n--){
        cin>>f;
        sum += f;
    }
    if(sum & 1){
        cout<<3<<endl;
    }
    else{
        cout<<2<<endl;
    }
    return 0;}
