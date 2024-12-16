#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,flag = 0;
    cin>>n>>m;
    int p[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i = 0;i<15;i++){
        if(p[i] == n && p[i+1] == m){
            flag = 1;
            break;
        }
    }

    if(flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
return 0;}
