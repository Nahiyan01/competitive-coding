#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++){
//        cin>>a[i];
//    }
//    ll sum1 = a[0];
//    ll sum3 = a[n-1];
//    int i = 0;
//    int j = n;
//    int solidx = 0;
//    while(i <= j){
//        if(sum1 < sum3){
//            sum1+= a[i++];
//        }
//        else if(sum1 > sum3){
//            sum3 += a[j--];
//        }
//        else{
//            solidx = i;
//            sum1 += a[i++];
//            sum3 += a[j--];
//        }
//    }
//    cout<<accumulate(a,a+solidx,0);
// set process

    int n;
    cin>>n;
    int a[n];
    ll l = 0;
    set<ll>sum;
    for(int i=0;i<n;i++){
        cin>>a[i];
        l += a[i];
        sum.insert(l);
    }
    ll ans = 0;
    ll r = 0;
    for(int i=0;i<n;i++){
        sum.erase(l);
        l -= a[i];
        r += a[i];
        if(sum.count(r)){
            ans = max(ans,r);
        }
    }
    cout<< ans<<endl;
return 0;}
