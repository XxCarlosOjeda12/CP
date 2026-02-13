#include <bits/stdc++.h>
using namespace std;

#define MAX 25
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    if (n + 1 >= MAX) {   
        return;
    }

    vector<int> fibo(MAX);

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < MAX; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    cout << fibo[n + 1] << endl;
}

int main() {
    solve();
    return 0;
}
