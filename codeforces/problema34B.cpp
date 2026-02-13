#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n, m;
    cin >> n >> m;
    vector<int> precios(n);
    for (int i = 0; i < n; ++i) {
        cin >> precios[i];
    }

 
    sort(precios.begin(), precios.end());

    int maxDin = 0;


    for (int i = 0; i < m; ++i) {
        if (precios[i] < 0) {
            maxDin += -precios[i]; 
        }
    }

    cout << maxDin << endl;


}

int main(){
    solve();
    return 0;
}


 