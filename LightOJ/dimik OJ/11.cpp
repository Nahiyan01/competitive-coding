#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int sum=1;
        cin>>n;
        for(int i=n;i>=1;i--){
            sum *= i;
        }
        cout<<sum<<endl;
    }
return 0;}
