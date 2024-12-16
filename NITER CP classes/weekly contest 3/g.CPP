#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int flag = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            flag = 1;
            break;
        }
    }
    cout<<(flag == 1 ? "No" : "Yes")<<endl;
return 0;}
