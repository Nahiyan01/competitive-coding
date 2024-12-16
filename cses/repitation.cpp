#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    char cur;
    int count=0,ans=0;
    for(int i=0;i<str.size();i++){
        if(str[i]!=cur){
            cur = str[i];
            count =0;
        }
        if(str[i]==cur){
            count++;
        }
        ans = max(ans,count);
    }
    cout<<ans<<endl;
    return 0;

}
