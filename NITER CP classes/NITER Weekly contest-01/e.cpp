#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int flag =0;
        string s="cdefors";
        char c;
        cin>>c;
        for(int i=0;i<s.size();i++){
            if(c == s[i]){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;}
