#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[10][10];

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void solve(){
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    int comidos = 0;
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'W') {
                for (int d = 0; d < 4; d++) {
                    int ni = i + dx[d], nj = j + dy[d];
                    if (isValid(ni, nj) && grid[ni][nj] == 'P') {
                        comidos++;
                        grid[ni][nj] = '.'; 
                        break;
                    }
                }
            }
        }
    }

    cout << comidos << endl;

}

int main() {
    solve();
    return 0;
}
