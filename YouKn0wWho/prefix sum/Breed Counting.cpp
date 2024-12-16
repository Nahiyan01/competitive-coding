#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v1(n+1);
    vector<int>v2(n+1);
    vector<int>v3(n+1);
    v1[0] = 0;
    v2[0] = 0;
    v3[0] = 0;
    for(int i=1;i<n+1;i++){
        if(a[i] == 1){
            v1[i] = v1[i-1] + a[i-1];
            v2[i] = v2[i-1] + 0;
            v3[i] = v3[i-1] + 0;
        }
        else if(a[i] == 2){
            v2[i] = v2[i-1] + a[i-1];
            v1[i] = v1[i-1] + 0;
            v3[i] = v3[i-1] + 0;
        }
        else{
            v3[i] = v3[i-1] + a[i-1];
            v1[i] = v1[i-1] + 0;
            v2[i] = v2[i-1] + 0;
        }

    }
    for(int t = 1;t<=q;t++){
        int a,b;
        cin>>a>>b;
        cout<<v1[b] - v1[a-1]<<" "<<v2[b] - v2[a-1]<<" "<<v3[b] - v3[a-1]<<endl;
    }
return 0;}
