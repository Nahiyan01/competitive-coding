#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    const double pi = 2.0 * acos(0.0);
    for(int t=1;t<=test;t++){
        double r;cin>>r;
        double areac = pi * r *r;
        double areas = (2*r) *(2*r);
        double ans = abs(areac - areas);
       printf("Case %d: %.2lf\n",t,ans);
    }
return 0;}
