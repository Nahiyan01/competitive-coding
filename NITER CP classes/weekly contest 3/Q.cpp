#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long n;
        cin>>n;
        long long temp = n;
        long long  rev = 0;
        while(n>0){
            int ld = n%10;
            rev = (rev * 10) + ld;
            n /= 10;
        }
        cout<<"Case "<<i<<": "<<(rev == temp ? "Yes" : "No")<<endl;
    }
return 0;}
