#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,x(0);
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        if(str[1]=='+') ++x;
        else --x;
    }
    cout<<x<<endl;
return 0;

}
