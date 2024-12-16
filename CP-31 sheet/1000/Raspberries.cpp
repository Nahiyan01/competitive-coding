#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        int mini = 0;
        int multi = 1;
        int ans = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(mini > a[i]){
                mini = a[i];
            }
            multi *= a[i];
        }
        temp_mini = mini;
        while(k == 2){
            int ld = multi % 10;
            if(ld == 2){
                ans = temp_mini - mini;
                break;
            }
            mini++;
        }
        while(k == 3){
            int digit_sum = 0;
            digit_sum += multi/10;
            if(digit_sum % 3 == 0){
                ans = temp_mini - mini;
                break;
            }
            temp_mini++;
        }
        while(k == 5){
            int ld = multi %10;
            if(ld == 5 or ld == 0){

            }
        }
    }
return 0;}
