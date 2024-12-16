#include<iostream>
using namespace std;
int main(){
    int n,a,b,best=0,total=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        total = (total-a)+b;
        best = max(best,total);
    }
    cout<<best<<endl;
return 0;}
