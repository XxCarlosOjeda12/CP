#include <bits/stdc++.h>
using namespace std;

 
void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    
    vector<int> maxIndex(1001, -1);
    for (int i = 0; i < n; i++) {
        maxIndex[A[i]] = i + 1; 
    }

    int maxSum = -1; 
    for (int x = 1; x <= 1000; x++) {
        for (int y = x; y <= 1000; y++) {
            if (maxIndex[x] != -1 && maxIndex[y] != -1 && __gcd(x, y) == 1) {
                maxSum = max(maxSum, maxIndex[x] + maxIndex[y]);
            }
        }
    }

    cout << maxSum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
