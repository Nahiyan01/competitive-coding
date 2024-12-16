#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int res =m;
    if(m>n){
        cout<<-1<<endl;
        return 0;
    }
    while(res >= (n-m)){
           res *= m;
        }
    if(res == (n-m)){
        cout<<res - m<<endl;
    }
    else {
        cout<<res<<endl;
    }
return 0;}

