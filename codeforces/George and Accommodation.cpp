#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    while(n--){
        pair<int,int>room;
        cin>>room.first>>room.second;
        if(room.first < room.second && (room.second - room.first >= 2)) count++;
    }
    cout<<count<<endl;
return 0;}
