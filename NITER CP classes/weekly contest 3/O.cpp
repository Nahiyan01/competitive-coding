#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos(0.0)
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        float r;
        cin>>r;
        float square = pow((2*r),2);
        float circle = pi * (r*r);
        float ans = square - circle;
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
return 0;}
