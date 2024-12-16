#include<bits/stdc++.h>
using namespace std;

int rec(int x){
    if(x<1) return 0;
    else{
        cout<<x<<endl;
        x = x - 1;
        rec(x);
    }
}

int main(){
    int x;
    cin>>x;
    rec(x);
return 0;}
