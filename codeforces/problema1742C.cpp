#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<vector<char>> A(8, vector<char>(8));

     
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> A[i][j];
        }
    }

 
    for (int i = 0; i < 8; i++) {
        int contR = 0;  
        for (int j = 0; j < 8; j++) {
            if (A[i][j] == 'R') {
                contR++;
            }
        }
        if (contR == 8) {  
            cout << "R" << endl;
            return; 
        }
    }

 
    for (int j = 0; j < 8; j++) {
        int contB = 0; 
        for (int i = 0; i < 8; i++) {
            if (A[i][j] == 'B') {
                contB++;
            }
        }
        if (contB == 8) {  
            cout << "B" << endl;
            return;  
        }
    }
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
