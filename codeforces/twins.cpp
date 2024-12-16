#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int sum2 = 0;
    int cnt =0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sum = sum/2;
    sort(arr,arr+n);
    for(int i = n-1;i>=0;i--){
        sum2 += arr[i];
        cnt++;
        if(sum2>sum) break;
    }
    cout<<cnt<<endl;
return 0;}
