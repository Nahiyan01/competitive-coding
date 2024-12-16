#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int graycode(int n){
    if(n == 1){
        return {"0","1"};
    }
    vector<string> prevgraycode = graycode(n-1);
    vector<string>mirrorcode = prevgraycode;
    reverse(mirrorcode.begin(),mirrorcode.end());
    for(auto code:prevgraycode){
        code = "0" + code;
    }
    for(auto code:mirrorcode){
        code = "1" + code;
    }
    prevgraycode.insert(prevgraycode.end(),mirrorcode.begin());

    return prevgraycode;

}
int main(){
    int n;cin>>n;
    vector<string>ans;
    ans = graycode(n);
    for(auto code:ans){
        cout<<code<<endl;
    }
return 0;}
