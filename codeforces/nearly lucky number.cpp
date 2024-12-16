#include<iostream>
using namespace std;
int main(){
    long long int n,cnt=0;
    cin>>n;
    while(n>0){
        int ld = n %10;
        if(ld == 4 || ld == 7){
            cnt++;
        }
        n = n/10;
    }
    if (cnt == 4 || cnt == 7){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
return 0;}
