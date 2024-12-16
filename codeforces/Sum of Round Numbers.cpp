#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int power = 1;
    vector<int>vec;
    while (n>0){
        if(n%10 != 0){
            int ans = (n%10) * power;
           vec.push_back(ans);
        }
        n /= 10;
        power *= 10;
    }
    int len = vec.size();
    cout<<len<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    }
return 0;}
