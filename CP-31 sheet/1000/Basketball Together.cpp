#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //int t;
    //cin>>t;
    //while(t--){
        int n,d;
        cin>>n>>d;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int temp = d;
        int team = 0;
        int players = 0;
        while(players != n){
            int i = n-1;
            team++;
            players++;
            while(temp >= 0){
                temp -= v[i];
                players++;
            }
            temp = d;
            i--;
        }
        cout<<team<<endl;
   //}
return 0;}
