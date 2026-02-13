#include <bits/stdc++.h>
using namespace std;

long long minimo(int x) {
    x = abs(x);  
    long long  n = 0;
    long long  total = 0;

    while (total < x || (total - x) % 2 != 0) {
        n++;
        total += n;
    }
    
    return n;
}


void solve(){
    long long  n;
    cin >> n;
    long long  res = minimo(n);
    cout << res << "\n";
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
