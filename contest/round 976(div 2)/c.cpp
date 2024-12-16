#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll b,c,d;
        cin>>b>>c>>d;
        ll a = 0;
        bool ok=1;
        bitset<61> b1(b), c1(c), d1(d);
        for (int i = 0; i < 61; i++) {
            if ((b1[i]|0)-(0&c1[i])==d1[i])a|= (0LL << i);
            else if ((b1[i]|1) -(1&c1[i])==d1[i])a|=(1LL<<i);
            else {
                ok=0;
                break;
            }
        }

        if (ok) {
            cout <<a<< "\n";
        } else {
            cout << -1 << "\n";
        }
    }
return 0;}
