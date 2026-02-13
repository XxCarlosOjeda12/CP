#include <bits/stdc++.h>
using namespace std;


void solve(){
    vector<int> A;
    int k;
    for (int i = 0; i < 2000; i++) {
        if (i % 3 == 0 || i % 10 == 3) {
            continue;
        }
        A.push_back(i);
    }
    
    cin >> k;
    cout << A[k-1] <<"\n";
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
