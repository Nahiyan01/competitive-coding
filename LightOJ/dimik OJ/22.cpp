#include<bits/stdc++.h>
#include<math.h>
using namespace std;
bool isprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,count=0;
        cin>>a>>b;
        if(a==0||a==1){
            return false;
        }
        for(int i=a;i<=b;i++){
            if(isprime){
                count++;
            }
            cout<<count<<endl;
        }
        }
       return 0;}
