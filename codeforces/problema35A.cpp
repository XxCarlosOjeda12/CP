#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, n1, n2;
    cin >> n;  

    vector<int> A(3, 0);
    A[n - 1] = 1;  

    for (int i = 0; i < 3; i++) {
        cin >> n1 >> n2;

        swap(A[n1 - 1], A[n2 - 1]);
    }

    for (int i = 0; i < 3; i++) {
        if (A[i] == 1) {
            cout << i + 1;
            break;
        }
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();
    return 0;
}
