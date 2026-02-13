#include <bits/stdc++.h>
using namespace std;

void solve() {
    string ab;
    cin >> ab;
    int n = ab.length();

     
    for (int i = 1; i < n; i++) {  
        string a_str = ab.substr(0, i);
        string b_str = ab.substr(i);

         
        if (b_str[0] == '0') continue;

        int a = stoi(a_str);
        int b = stoi(b_str);

        if (b > a) {  
            cout << a << " " << b << "\n";
            return;
        }
    }

    cout << "-1\n";  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
