#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int TEST;
    cin>>TEST;
    while(TEST--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a,a+3);
        string ans = "";
        for(int i=0;i<3;i++){
            if(a[i+2] == 6 and a[i+1] == 1 and a[i] == 1){
                ans = "perfectus";
            }
            else if(a[i]== 3 and a[i+1] == 3 and a[i+2] == 3){
                ans = "perfectus";
            }
            else if(a[i+2] == 6 and a[i+1] == 3 and a[i] == 0){
                ans = "perfectus";
            }
        }
        if(ans != "perfectus"){
            cout<<"invalidum"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
return 0;}
