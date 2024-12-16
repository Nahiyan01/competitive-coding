#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin >> n >> q;
    vector<ll> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    vector<ll> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }


    sort(points.begin(), points.end());

    map<ll, ll> diff;


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            diff[points[i]]++;
            diff[points[j] + 1]--;
        }
    }

    map<ll, ll> coverage_count;
    ll current_coverage = 0;
    ll previous_point = points[0];

    for (auto it = diff.begin(); it != diff.end(); ++it) {
        ll current_point = it->first;

        if (current_coverage > 0) {
            coverage_count[current_coverage] += (current_point - previous_point);
        }


        current_coverage += it->second;
        previous_point = current_point;
    }

    for (int i = 0; i < q; i++) {
        cout << coverage_count[queries[i]] << " ";
    }
    cout << endl;
    }
return 0;}
