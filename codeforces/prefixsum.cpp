#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> A(n), prefix(n + 1, 0);

     
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        prefix[i + 1] = prefix[i] + A[i]; // Construcción del prefixsum
    }

    // Responder consultas en O(1)
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl; // Consulta eficiente
    }

    return 0;
}
