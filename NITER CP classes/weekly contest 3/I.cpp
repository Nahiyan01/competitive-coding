#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int count = 0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
        if(s[i] == 'N' || s[i] == 'W' || s[i] == 'D'){continue;}
        else {
            count++;
        }
    }
    if(count>6 && count%6 != 0){
        int over = count/6;
        int ball = count % (over * 6);
        cout<<over<<(over>1?" OVERS ":" OVER ")<<ball<<(ball>1?" BALLS":" BALL")<<endl;
    }
    else if(count>=6 && count%6 == 0){
        cout<<count/6<<(count/6 > 1 ? " OVERS" : " OVER")<<endl;
    }
    else if(count<6){
        cout<<count<<(count>1 ? " BALLS" : " BALL");
    }
    }
return 0;}
