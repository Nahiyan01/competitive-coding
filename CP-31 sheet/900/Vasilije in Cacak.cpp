#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        for(int i=n;i>=1;i--){
            if(x == 0){
                break;
            }
            if(x - i < 0) {
                    continue;
            }
            else{
                x = x - i;
            }
        }
        if(x == 0){
            cout<< "YES" <<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;}
