#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    if(sum >= 1){
        cout<<"HARD"<<endl;
    }
    else {
        cout<<"EASY"<<endl;
    }
return 0;}

