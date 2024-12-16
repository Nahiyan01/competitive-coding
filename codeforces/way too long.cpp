#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        int n = str.size();
        int f ;
        if(str.size()<=10){
            cout<<str<<endl;
         }
        else {

            f = str.size() - 2 ;

        cout<<str[0]<<f<<str[n-1]<<endl;
        }
    }
return 0;}
