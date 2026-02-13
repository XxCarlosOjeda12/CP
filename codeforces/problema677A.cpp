#include <bits/stdc++.h>
using namespace std;

void solve(){
     int n, h;
    cin >> n >> h;  

    int width = 0; 
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai; 
        if (ai > h) {
            width += 2;  
        } else {
            width += 1; 
        }
    }

    cout << width << "\n"; 


}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
