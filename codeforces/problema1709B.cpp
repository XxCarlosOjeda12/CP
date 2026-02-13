#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, a[4];
    cin >> x >> a[1] >> a[2] >> a[3];

    
    if (a[x] != 0 && a[a[x]] != 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
