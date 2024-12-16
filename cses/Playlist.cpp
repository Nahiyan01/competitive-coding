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
    int start = 0;
    set<int>s;
    int ans = 0;
    for(int i=0;i<n;i++){
        while(s.count(a[i])){
            s.erase(a[i]);
            start++;
        }
        s.insert(a[i]);
        ans = max(ans,(int)s.size());
        cout<< ans <<" "<<s.size()<< endl;
    }
    cout<<ans<<endl;
return 0;}
