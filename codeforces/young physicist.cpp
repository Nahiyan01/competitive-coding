#include<iostream>
using namespace std;
int main(){
    int n,xsum=0,ysum=0,zsum=0;
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        xsum += x;
        ysum += y;
        zsum += z;

    }
    if(xsum == 0 && ysum == 0 && zsum == 0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
return 0;}
