#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int m;
    cin >> m;
    vector<int> B(m);
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    vector<int> M;
    int i = 0, j = 0;
    while (i < n || j < m) {
        if (i < n) {
            M.push_back(A[i++]);
        }
        if (j < m) {
            M.push_back(B[j++]);
        }
    }

    vector<int> dp(n+m+1, 0); 
    for (int i = 1; i <= (n + m); i++) {
        dp[i] = dp[i-1] + M[i-1];
    }

    
    int maxSum = 0;
    for (int i = 0; i <= (n + m); i++) {
        if(dp[i] > maxSum){
            maxSum = dp[i];
        }
    }

    cout << maxSum << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
