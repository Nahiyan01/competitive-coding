#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<long long>pref(n+1);
    pref[0] = 0;
    for(int i=1;i<=n;i++){
        pref[i] = pref[i-1] + a[i-1];
    }

    sort(a,a+n);

    vector<long long>s(n+1);
    s[0] = 0;
    for(int i=1;i<=n;i++){
        s[i] = s[i-1] + a[i-1];
    }

    int q;
    cin>>q;
    while(q--){
        int type,l,r;
        cin>>type>>l>>r;

        if(type == 1){
            cout<<pref[r] - pref[l-1]<<endl;
        }

        else{
           cout<<s[r] - s[l-1]<<endl;
        }
    }
return 0;}
