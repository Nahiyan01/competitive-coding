#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    float total = 0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p;
        total += p;
    }
    cout<<fixed<<setprecision(12)<<total/n<<endl;
return 0;}

