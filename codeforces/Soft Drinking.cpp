#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t = k*l/n;
    int lime = c*d;
    int salt = p/np;
    int ans = min(t,min(lime,salt));
    cout<<ans / n<<endl;
return 0;}

