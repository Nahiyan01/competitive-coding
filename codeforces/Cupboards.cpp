#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l,r;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>l>>r;
        a[i] = l;
        b[i] = r;
    }
    int azero=0,aone=0,bzero=0,bone=0;
    for(int i=0;i<n;i++){
        if(a[i] == 0) azero++;
        else aone++;
    }
    for(int i=0;i<n;i++){
        if(b[i] == 0) bzero++;
        else bone++;
    }
    cout<<(azero > aone ? aone:azero) + (bzero > bone ? bone:bzero)<<endl;
return 0;}
