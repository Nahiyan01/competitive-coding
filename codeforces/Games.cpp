#include<bits/stdc++.h>
using namespace std;
int main(){
   int n ,count=0;
   cin>>n;
   vector<pair<int,int>> v;
   for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    v.push_back({a,b});
   }
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(v[i].first == v[j].second) count++;
        if(v[i].second == v[j].first) count++;
    }
   }
   cout<<count<<endl;
return 0;}
