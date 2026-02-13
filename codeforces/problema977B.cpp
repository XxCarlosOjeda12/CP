#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string S, res;
    cin >> n >> S;

    int max_count = 0;

    for (int i = 0; i < n - 1; i++) {
         
        string concat = string(1, S[i]) + string(1, S[i + 1]);
        int count = 0;

        
        for (size_t pos = S.find(concat); pos != string::npos; pos = S.find(concat, pos + 1)) {
            count++;
        }

        
        if (count > max_count) {
            max_count = count;
            res = concat;
        }
    }

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
