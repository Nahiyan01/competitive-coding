#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    sort(str.begin(),str.end());
    int len = str.size();
    for(int i=0;i<len;i++){
        if(str[i]!=str[i-1]){
            count++;
        }
    }
    if(count&1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else {
        cout<<"CHAT WITH HER!" <<endl;
    }
    return 0;
}
