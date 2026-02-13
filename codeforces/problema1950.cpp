#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int size = 2 * n;
        vector<string> cuadro(size);

        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if ((i / 2 + j / 2) % 2 == 0) {
                    cuadro[i] += '#';
                } else {
                    cuadro[i] += '.';
                }
            }
        }

        
        for (auto& row : cuadro) {
            cout << row << endl;
        }
    }

    return 0;
}
