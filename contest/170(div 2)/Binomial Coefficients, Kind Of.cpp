#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll MOD = 1000000007;

vector<vector<int>> precompute_binomial(int max_n) {
    vector<vector<int>> C(max_n + 1, vector<int>(max_n + 1, 0));

    // Base cases
    for (int n = 0; n <= max_n; ++n) {
        C[n][0] = 1;  // C(n, 0) = 1
        C[n][n] = 1;  // C(n, n) = 1
    }

    // Fill the table using the incorrect formula
    for (int n = 2; n <= max_n; ++n) {
        for (int k = 1; k < n; ++k) {
            C[n][k] = (C[n][k-1] + C[n-1][k-1]) % MOD;
        }
    }

    return C;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    vector<int> n(t), k(t);
    for (int i = 0; i < t; ++i) {
        cin >> n[i];
    }
    for (int i = 0; i < t; ++i) {
        cin >> k[i];
    }

    int max_n = *max_element(n.begin(), n.end());

    // Precompute the binomial coefficients
    vector<vector<int>> C = precompute_binomial(max_n);

    // Answer each query
    for (int i = 0; i < t; ++i) {
        cout << C[n[i]][k[i]] << endl;
    }

    return 0;
}
