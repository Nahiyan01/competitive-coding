#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int input;
    long long int sum = (n*(n+1))/2;
    long long int sum2=0;
    for(int i=1;i<n;i++){
        cin>>input;
        sum2 += input;
    }
    cout<<sum - sum2<<endl;
return 0;}
