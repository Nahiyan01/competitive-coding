#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int MOD = 998244353;



void printF(int index,vector<ll>& ds,vector<vector<ll>>& qq,int a[],int n){
    if(index == n){
        qq.push_back(ds);
        return ;
    }

    //for taking the element for subsequence
    ds.push_back(a[index]);
    printF(index+1,ds,qq,a,n);
    ds.pop_back();

    //for not taking the element for subsequence
    printF(index+1,ds,qq,a,n);

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll>ds;
        vector<vector<ll>>qq;
        printF(0,ds,qq,a,n);
        for(ll i=0;i<qq.size();i++){
            vector<ll>k = qq[i];
            for(ll j=0;j<k.size();j++){
                cout<<k[j]<<" ";
            }
            cout<<endl;
        }
    }
return 0;}
