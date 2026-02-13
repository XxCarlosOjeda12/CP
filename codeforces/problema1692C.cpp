#include <bits/stdc++.h>
using namespace std;

void solve(){

    vector<vector<char>> chess(8, vector<char>(8));
        
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> chess[i][j];
            }
        }

         
        for (int i = 1; i < 7; i++) {  
            for (int j = 1; j < 7; j++) {   
                if (chess[i][j] == '#') {

                    bool bandera = true;
                    
                    if (chess[i-1][j-1] != '#' || chess[i-1][j+1] != '#' ||
                        chess[i+1][j-1] != '#' || chess[i+1][j+1] != '#') {
                        bandera = false;
                    }

                    if (bandera) {
                        cout << i + 1 << " " << j + 1 << endl;   
                        break;
                    }
                }
            }
        }

}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
