#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int first = min(a,min(b,c));
    int last = max(a,max(b,c));
    int mid = (a+b+c) - (first+last);
    cout<<(mid - first) + (last - mid)<<endl;
return 0;}
