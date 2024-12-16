#include<iostream>
using namespace std;
    int finding_tailing_0s(int n){
        if(n<0){
            return -1;
        }
        int count =0;
        for(int i=5;n/i>=1;i*=5){
            count += n/i;
        }
        return count ;
        }
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
            cin>>n;
            cout<<finding_tailing_0s(n)<<endl;
    }
    return 0;}
