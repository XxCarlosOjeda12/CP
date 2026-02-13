#include <bits/stdc++.h>
using namespace std;
 
#define MAX 1000  
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    string S;
    cin >> S;
 
    int x = 0, y = 0;  
 
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < n; j++) {  
            if (S[j] == 'N') {
                y++;
            } else if (S[j] == 'E') {
                x++;
            } else if (S[j] == 'S') {
                y--;
            } else if (S[j] == 'W') {
                x--;
            }
 
            if (x == a && y == b) {
                cout << "YES\n";
                return;
            }
        }
    }
 
    cout << "NO\n";  
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}