#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,w,total=0;
    long long int n;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        total = total + (k*i);
    }
    if(total>n)cout<<total - n<<endl;
    else cout<<"0"<<endl;
return 0;}
