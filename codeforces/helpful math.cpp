#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<=str.size();i+=2){
        for(int j=i+2;j<=str.size();j+=2){
            if(str[i]>str[j]){
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout<<str<<endl;

return 0;}
