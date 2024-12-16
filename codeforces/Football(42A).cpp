#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string goal,first,sec;
    cin>>first;
    int home=1,away=0;
    n -= 1;
    while(n--){
        cin>>goal;
        if(first != goal){
            away++;
            sec = goal;
        }
        else{
            home++;
        }
    }
    if(home>away){
        cout<<first<<endl;
    }
    else {
        cout<<sec<<endl;
    }
return 0;}
