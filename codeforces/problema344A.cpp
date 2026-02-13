#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;
    vector<string> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
 
    int groups = 1; 
    for (int i = 1; i < n; i++) {
        if (A[i] != A[i - 1]) {
            groups++;  
        }
    }

    cout << groups << endl;
}

int main() {
    solve();
    return 0;
}
