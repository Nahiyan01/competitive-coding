#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    //ll t;cin>>t;
    //while(t--){
    ll a;
    cin>>a;
    bool flag = 1;
    //checking for the prime number .
    for(ll i=2;i<=sqrt(a);i++){
        if(a%i == 0){
            flag = 0;
            break;
        }
    }
    // if the number is prime then I will reverse it and then 
    //check if the reversed one is prime also
    ll temp = a;
    ll reversed = 0;
    if(flag == 1){
        //method of reversting any number in int range.
        while(temp != 0){
            int ld = temp % 10;
            reversed = (reversed * 10) + ld;
            temp /= 10;
        }
    }
    //checking if the reversed one is prime or not . 
    bool flag2 = 1;
    if(flag == 1){
        for(ll i=2;i<=sqrt(reversed);i++){
            if(reversed % i == 0){
                flag2 = 0;
                break;
            }
        }   
    }

    // debugging to see if the reverse is ok or not
    //delete it before submitting  
    //cout<<reversed<<endl;

    //printing answer to the problem.
    if(flag == 0){
        cout<<a<<" is not prime"<<endl;
    }
    else if(flag == 1 and flag2 == 0){
        cout<<a<<" is prime"<<endl;
    }
    else if((flag == 1 and flag2 == 1) and (reversed == a)){
        cout<<a<<" is prime"<<endl;
    }
    else{
        cout<<a<<" is emirp"<<endl;
    }
return 0;

}