#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = n * (n+1) /2;
    if(sum & 1){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        cout<<"YES"<<endl;
        if(n%2 == 0){
            cout<<(n/2)<<endl;
            int i = 1;
            while(i<=n){
                if(i & 1){
                    cout<<i<<" ";
                    i+=3;
                }
                else{
                    cout<<i<<" ";
                    i++;
                }
            }
            cout<<endl;
            cout<<n/2<<endl;
            int j = 2;
            while(j<=n){
                if(j & 1){
                    cout<<j<<" ";
                    j+=3;
                }
                else{
                    cout<<j<<" ";
                    j++;
                }
            }
        }
        else{
             cout<<(n/2)+1<<endl;
             cout<<1<<" "<<2<<" ";
            int i = 4;
            while(i<=n){
                if(i & 1){
                    cout<<i<<" ";
                    i++;
                }
                else{
                    cout<<i<<" ";
                    i+=3;
                }
            }
            cout<<endl;
            cout<<n/2<<endl;
            cout<<3<<" ";
            int j = 5;
            while(j<=n){
                if(j & 1){
                    cout<<j<<" ";
                    j++;
                }
                else{
                    cout<<j<<" ";
                    j+=3;
                }
            }
        }
    }
return 0;}
