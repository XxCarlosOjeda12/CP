#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, x0;
    cin >> n >> x0;
    
    int m = 0, M = 1000;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        if (a > b) swap(a, b);
        
        m = max(m, a);
        M = min(M, b);
    }
    
    if (m > M) {
        cout << -1 << endl;
    } else if (x0 < m) {
        cout << m - x0 << endl;
    } else if (x0 > M) {
        cout << x0 - M << endl;
    } else {
        cout << 0 << endl;
    }
    
}

int main() {
    solve();
    return 0;
}