#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    string st; cin>>st;

    int s=0,e= st.size()-1;
    bool ok= 0,no=0,yes=1;
    while (s<e)
    {
     if (st[s]==st[e]) s++,e--;
     else if (st[s]<st[e]) {ok=1;yes=0;break;}
     else {no=1;yes=0;break;}

    }

   if (ok ||yes) cout <<st<<endl;
   else  {string x= st;reverse(x.begin(), x.end()); cout <<x<<st<<endl;}


    }
}
