#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int choto= min(n,m);
    if(choto & 1) cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;
return 0;}
