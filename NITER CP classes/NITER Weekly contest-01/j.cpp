#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s="YES";
        string t;
        cin>>t;
        for(int i=0;i<t.size();i++){
            t[i] = toupper(t[i]);
        }
        if(t == s){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
return 0;}
