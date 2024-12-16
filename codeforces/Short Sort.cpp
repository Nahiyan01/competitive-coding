#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    int count=0;
    cin>>s;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            if(s[i]>s[j]){
            swap(s[i],s[j]);
            count++;
            }
        }
    }
    if(count > 1){
        cout<<"NO"<<endl;
    }
    else {
        cout<<"Yes"<<endl;
    }
    }
    return 0;
}
