#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<e){
        if(k == arr[mid]){
            ans = mid;
            e = mid - 1;
        }
        else if(k < arr[mid]){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int k){
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<e){
        if(k == arr[mid]){
            ans = mid;
            s = mid + 1;
        }
        else if(k < arr[mid]){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first = firstocc(arr,n,k);
    int last = lastocc(arr,n,k);
    cout<<first<<endl;
    cout<<last<<endl;
return 0;}
