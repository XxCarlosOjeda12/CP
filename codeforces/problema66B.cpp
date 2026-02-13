#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int maxA = 0;

    for (int i = 0; i < n; i++) {
        int izq = i, der = i;

        while (izq > 0 && A[izq - 1] <= A[izq]) {
            izq--;
        }

        while (der < n - 1 && A[der + 1] <= A[der]) {
            der++;
        }

        maxA = max(maxA, der - izq + 1);
    }

    cout << maxA << endl;
}

int main() {
    solve();
    return 0;
}
