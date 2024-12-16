#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int s = 0;
        int e = INT_MAX;
        int ans = 0;
        while(s <= e){
            int mid = (e - s)/2;
            int k = sqrt(mid);
            while((k+1) * (k+1) <= mid){
                k++;
            }
           while(k * k > mid){
            k--;
           }
           int cnt = mid - k;
           if(cnt>=n){
            ans = mid;
            ans = mid;
            e = mid - 1;
           }
           else{
            s = mid + 1;
           }
        }
           cout<<ans<<endl;
    }
return 0;}
