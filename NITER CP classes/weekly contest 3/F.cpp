#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int flag = 0;
    while(a>0 && b>0){
        int ld1 = a%10;
        int ld2 = b%10;
        if(ld1 + ld2 > 9){
            flag = 1;
            break;
        }
        a /= 10;
        b /= 10;
    }
    cout<<(flag == 1 ? "Yes" : "No")<<endl;
return 0;}
