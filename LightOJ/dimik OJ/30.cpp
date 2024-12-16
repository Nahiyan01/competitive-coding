#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,bhajok = 0;
        cin>>n;
        for (int i=1;i<=n;i++){
            if(n%i==0){
                bhajok+=i;
            }
        }
        if (bhajok == n){
                cout<<"YES, "<<n<<" is a perfect number!"<<endl;
            }
            else {
                cout<<"NO, "<<n<<" is not a perfect number!"<<endl;
            }
    }

return 0;}
