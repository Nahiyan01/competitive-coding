#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
         double crr = (double) (b * 6)/(300-c);
         double rrr = (double) (((a+1)-b)*6)/c;
         cout<<fixed<<setprecision(2)<<crr<<" "<<fixed<<setprecision(2)<<rrr<<endl;
    }
return 0;}
