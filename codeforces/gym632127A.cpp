#include <bits/stdc++.h>
using namespace std;

bool esPrimo(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return (n == 2);
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve() {
    long long n;
    cin >> n;

    long long s = (n * (n + 1)) / 2;

    if (!esPrimo(s)) {
        cout << s << "\n";
    } else {
        if (!esPrimo(s - 1)) cout << s - 1 << "\n";
        else cout << s - 2 << "\n";  
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
    return 0;
}
