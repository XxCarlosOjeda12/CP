#include <bits/stdc++.h>
using namespace std;
 
int procesarM(vector<vector<char>>& A, int n) {
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) { 
                if (A[i][j] == 'X') cont1++;
            } 
            else if (i == 1 || i == n - 2 || j == 1 || j == n - 2) { 
                if (A[i][j] == 'X') cont2++;
            } 
            else if (i == 2 || i == n - 3 || j == 2 || j == n - 3) { 
                if (A[i][j] == 'X') cont3++;
            } 
            else if (i == 3 || i == n - 4 || j == 3 || j == n - 4) { 
                if (A[i][j] == 'X') cont4++;
            } 
            else { 
                if (A[i][j] == 'X') cont5++;
            }
        }
    }

    int res = 1 * cont1 + 2 * cont2 + 3 * cont3 + 4 * cont4 + 5 * cont5;
    return res;
}

void solve() {
    int n = 10;
    vector<vector<char>> A(n, vector<char>(n));
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    int r = procesarM(A,n);
    cout << r <<"\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


 