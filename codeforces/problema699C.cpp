#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<vector<int>> dp(n, vector<int>(3, 0));

 
    dp[0][0] = 0;  
    dp[0][1] = (A[0] == 1 || A[0] == 3) ? 1 : 0;  
    dp[0][2] = (A[0] == 2 || A[0] == 3) ? 1 : 0;  

 
    for (int i = 1; i < n; i++) {
 
        dp[i][0] = max({dp[i-1][0], dp[i-1][1], dp[i-1][2]});

        if (A[i] == 1 || A[i] == 3) {
            dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + 1;
        }

        if (A[i] == 2 || A[i] == 3) {
            dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + 1;
        }
    }
    
    int max_actividad = max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    cout << n - max_actividad << "\n";
}

int main() {
    solve();
    return 0;
}
