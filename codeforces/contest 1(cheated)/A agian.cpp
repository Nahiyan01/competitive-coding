#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        string y = x;
        int len2 = y.size();
        int len = s.size();
        int cnt = 0;
        int c;
       while (x.size() <= len) {
            x += x;
            cnt++;
        }
        size_t found = x.find(s);
        if(found != string::npos){
            cout<<cnt<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
return 0;}
