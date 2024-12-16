#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(key == arr[mid]){
            ans = mid;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index = binarysearch(arr,n,key);
    cout<<index<<endl;
return 0;}
