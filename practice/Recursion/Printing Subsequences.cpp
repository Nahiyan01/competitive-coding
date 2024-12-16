#include<bits/stdc++.h>
using namespace std;

void printF(int index,vector<int>& ds,int arr[],int n){
    if(index == n){
        for(auto x:ds){
            cout<<x;
        }
        cout<<endl;
        return;
    }

    //for taking the element for subsequence
    ds.push_back(arr[index]);
    printF(index+1,ds,arr,n);
    ds.pop_back();

    //for not taking the element for subsequence
    printF(index+1,ds,arr,n);

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ds;
    printF(0,ds,arr,n);
return 0;}
