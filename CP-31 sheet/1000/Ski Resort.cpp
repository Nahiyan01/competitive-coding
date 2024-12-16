#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        int a[n];
        vector<int>cnts;
        int cnt = 0;
        for(int i=0;i<n;i++){
             cin>>a[i];
             if(a[i] <= q){
                cnt++;
             }
             else{
                if(cnt >=k){
                    cnts.push_back(cnt);
                }
                cnt = 0;
             }
        }
        if(cnt >=k){
            cnts.push_back(cnt);
        }
        //for(auto x:cnts){
          //  cout<<x<<" ";
        //}

        sort(cnts.begin(),cnts.end());
        int can_not = false;
        int ways = 0;
        for(int i=cnts.size() - 1;i>=0;i--){
                if(cnts[i] == k){
                    ways++;
                }
                else{
                    ways += pow(2,cnts[i]) - pow(2,cnts[i] - 2);
                }
            //cout<<ways<<endl;
        }
        cout<<ways<<endl;
    }
return 0;}
