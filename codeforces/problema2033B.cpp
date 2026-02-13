#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    map<int, int> min_diagonal;
    
 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
            int d = i - j;  
            if (min_diagonal.find(d) == min_diagonal.end()) {
                min_diagonal[d] = matrix[i][j];
            } else {
                min_diagonal[d] = min(min_diagonal[d], matrix[i][j]);
            }
        }
    }
    
    int moves = 0;
    for (const auto& [d, min_value] : min_diagonal) {
        if (min_value < 0) {
            moves += abs(min_value);
        }
    }
    
    cout << moves << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
