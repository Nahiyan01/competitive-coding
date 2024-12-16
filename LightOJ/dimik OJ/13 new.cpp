#include<iostream>
#include<string.h>
using namespace std;
int countwords(string str){
    int count = 0;
    for(int i=0;i<str.size();i++){
        if(str[i] == ' '){
            count++;
        }
    }
    count += 1;
    return count;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin,str);
        int count = countwords(str);
        int ans = count * (count - 1);
        cout<< "1/"<<ans<<endl;
    }
return 0;}
