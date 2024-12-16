#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string vowel = "aeiou";
        string res = "";
        int j = 0;
        for(int i=0;i<n;i++){
            if(j == 5){
                j = 0;
            }
            res += vowel[j];
            j++;
        }
        sort(res.begin(),res.end());
        cout<<res<<endl;
    }
return 0;}
