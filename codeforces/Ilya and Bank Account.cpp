#include<iostream>
#include<string>
using namespace std;
int main(){
    /*string s;
    cin>>s;
    int hard =1;
    if(s[0] == '-'){
    char high =s[1];
    int len = s.size();
    for(int i=0;i<len;i++){
        high = max(high,s[i]);
    }
    for(int i=0;i<len;i++){
        if(s[i] == high){
            s.erase(s.begin() + i);
        }
    }
    }
    if(hard == 0){
        cout<<0<<endl;
    }
    else{
        cout<<s<<endl;
    }

    }
    else {
        cout<<s<<endl;
    }*/
    int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else {
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        cout << max(a, b) << endl;
    }
return 0;}
