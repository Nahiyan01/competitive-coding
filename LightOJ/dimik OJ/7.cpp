#include<iostream>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for (i=1;i<=t;i++){
    int n1,n2,n3;
    int greatest,smallest,medium;
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3){
         greatest = n1;
    }
    else if(n2>=n1 && n2>=n3){
        greatest = n2;
    }
    else {
        greatest = n3;
    }

     if (n1<=n2 && n1<=n3){
        smallest = n1;
     }
     else if (n2<=n1 && n2<=n3){
        smallest = n2 ;
     }
     else {
        smallest = n3;
     }
     medium = (n1+n2+n3) - greatest - smallest;
     cout<<"Case "<<i<<":";
     cout<<" "<<smallest<<" "<<medium<<" "<<greatest;
    }
return 0;}
