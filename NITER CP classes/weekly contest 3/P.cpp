#include<bits/stdc++.h>
using namespace std;
int adding(int a,int b){
    if()
    else{
        return adding(a,b) +
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int a,b;
        cin>>a>>b;
        long long count = 0;
        while(b>=a){
           if((b*(b+1)/2)%3 == 0){
            count++;
           }
           b--;
        }
        cout<<"Case "<<i<<": "<<count<<endl;
    }

return 0;}
