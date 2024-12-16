
#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int n;
        cin>>n;
        cout<<"Case "<<k<<":";
        for(int i=1;i<=n;i++){
            if(n%i == 0){
            cout<<" "<<i;
            }
        }
        cout<<endl;
    }
   return 0;}
