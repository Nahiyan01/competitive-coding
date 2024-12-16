#include<bits/stdc++.h>
using namespace std;

//functional
int rec(int n){
    if(n == 0){
        return 0;
    }
    return n + rec(n-1);
}



//parameterized
/*void rec(int n,int sum){
    if(n < 1){
        cout<<sum<<endl;
        return ;
    }
    else{
        rec(n-1,sum + n);
    }
}*/

int main(){
    int n;
    cin>>n;
    //rec(n,0);
    cout<<rec(n);
return 0;}
