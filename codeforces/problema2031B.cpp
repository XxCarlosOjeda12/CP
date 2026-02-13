#include <bits/stdc++.h>
using namespace std;

void solve() {
    
        int n;
        cin >> n; 
        vector<int> p(n + 1);  

        for (int i = 1; i <= n; i++) {
            cin >> p[i];  
        }

        bool bandera = true;

        for (int i = 1; i <= n; i++) {
            if (p[i] == i) {
                continue;  
            }
            if (i < n && p[i] == i + 1 && p[i + 1] == i) {
 
                swap(p[i], p[i + 1]);
            } else {
 
                bandera = false;
                break;
            }
        }

        if(bandera){
            cout <<"YES" <<"\n";
        }else{
            cout <<"NO" <<"\n";
        }
    
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
