#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void solve() {
    int n, x = -1, y = -1, y1 = -1; 
    cin >> n;
    bool bandera = false;
    vector<vector<char>> grid(n, vector<char>(5));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> grid[i][j];
        }
    }


    for (int i = 0; i < n; i++) {
        if (grid[i][0] == 'O' && grid[i][1] == 'O') {
            bandera = true;
            x = i; y = 0; y1 = 1;
            break;
        }
        if (grid[i][3] == 'O' && grid[i][4] == 'O') { 
            bandera = true;
            x = i; y = 3; y1 = 4;
            break;
        }
    }

    if (bandera) {
        grid[x][y] = '+';  
        grid[x][y1] = '+';

        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
    } else {
        cout << "NO" <<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
