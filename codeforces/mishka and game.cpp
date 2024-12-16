#include<iostream>
using namespace std;
int main(){
    int n,m=0,c=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if(a>b){
            m++;
        }
        if(b>a){
            c++;
        }
    }
    if(m>c) cout<<"Mishka"<<endl;
    else if(c>m) cout<<"Chris"<<endl;
    else if(c == m) cout<<"Friendship is magic!^^"<<endl;
return 0;}
