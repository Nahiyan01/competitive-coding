#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    int temp = y;
    for(int i=0;i<x;i++){
        if(y%x != 0){
            y++;
        }
    }
    cout<<y - temp<<endl;
return 0;}
