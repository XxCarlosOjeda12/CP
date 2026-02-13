#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        if (n % 10 != 0) {
            n--;   
        } else {
            n /= 10;   
        }
    }

    cout << n << "\n";   
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
