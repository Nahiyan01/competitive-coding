#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        int n,k;
        cin>>n>>k;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int l=0,r=k-1;
       vector<ll>sum;
       fill(sum.begin(),sum.end(),0);
       int i = 0;
       while(r != n){
            for(int j = l;j<r;j++){
                if((sum[i+1] - sum[i]) > 1){
                    l = r;
                    r += k - 1;
                    break;
                }
                else{
                    sum.push_back(mp[a[j]]) ;
                    l++;
                    r++;
                    i++;
                }
            }
       }
        int len = sum.size();
       sort(sum.rbegin(),sum.rend());
       cout<<sum[0]<<endl;
    }
return 0;}
