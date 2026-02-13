#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int monosfila1 = min(m, a); 
    int monosfila2 = min(m, b);
    int asientosrestantes1 = m - monosfila1;
    int asientosrestantes2 = m - monosfila2;
    int monosinpref = min(c, asientosrestantes1 + asientosrestantes2);

    int total = monosfila1 + monosfila2 + monosinpref;
    cout << total << "\n";
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
