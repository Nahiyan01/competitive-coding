#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1] = {0};
    int x,y;
    int level;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>level;
        a[level] = 1;
    }
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>level;
        a[level] = 1;
    }
    for(int i=1;i<n;i++){
        if(a[i] == 0) {
            cout<<"Oh, my keyboard!"<<endl;
            break;
            }
    }
    cout<<"I become the guy."<<endl;
return 0;}
