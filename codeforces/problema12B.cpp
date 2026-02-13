#include <bits/stdc++.h>
using namespace std;

void solve() {
    string n1, n2;  
    cin >> n1 >> n2;

     sort(n1.begin(), n1.end());

    int pos = n1.find_first_not_of('0');
    if (pos != string::npos && pos > 0) {
        swap(n1[0], n1[pos]);
    }

    if (n1 == n2) {
        cout << "OK" << "\n";
    } else {
        cout << "WRONG_ANSWER" << "\n";
    }
}

int main() {
    solve();
    return 0;
}
