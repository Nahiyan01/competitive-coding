#include<iostream>
#include<string.h>
#include<map>
using namespace std;
unsigned long long possibility(int n){
    unsigned long long  sum=1;
    for(int i=n;i>=1;i--){
        sum *=i;
    }
    return sum;
}

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
        int n = repeat(str);
        int count = countwords(str);
        int fact = possibility(count);
        cout<<"1/"<<(fact/n)<<endl;
    }
return 0;}
