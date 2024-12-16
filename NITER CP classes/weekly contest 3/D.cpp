#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m;
    cin>>h>>m;
    double ans = abs(0.5 * (60*h - 11*m));
    if(ans > 180){
        ans = 360 - ans;
    }
    cout<<fixed<<setprecision(7)<<ans<<endl;
return 0;}
